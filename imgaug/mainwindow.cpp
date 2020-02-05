#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imgview.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Open_triggered()
{
    imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), QStandardPaths::writableLocation(QStandardPaths::HomeLocation),
                                                     tr("Image Files (*.png *.jpg *.bmp"));
    if (imagePath.isEmpty())
        return;

    imageObject = new QImage();
    imageObject->load(imagePath);
    image = QPixmap::fromImage(*imageObject);

    image_ratio = image.height() / double(image.width());

    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());

    ui->gv1->setScene(scene);
    ui->gv1->fitInView(scene->sceneRect());
    ui->txt_path->setText(imagePath);

    //ini image
    rotate_image = image;
    resize_image = image;
    //
    ini_width_gv2 = ui->gv2->width();
    ini_height_gv2 = ui->gv2->height();
    scene2 = new QGraphicsScene(this);

//    img_view = new ImgView(this);
//    img_view->show();
}

void MainWindow::on_actionE_xit_triggered()
{
    this->close();
}

void MainWindow::on_sbar_rotate_valueChanged(int value)
{
    ui->txt_rotation_angle->setText(QString::number(value));

    rotate_image = resize_image;

    QMatrix rm; //왜 전역으로주면 이상해 지는가!
    rm.rotate(value);
    rotate_image = rotate_image.scaled(ini_width_gv2, ini_height_gv2);
    rotate_image = rotate_image.transformed(rm);

    scene2 = new QGraphicsScene(this);
    scene2->addPixmap(rotate_image);
    scene2->setSceneRect(rotate_image.rect());

    ui->gv2->setGeometry(ui->gv2->x(), ui->gv2->y(), rotate_image.width(), rotate_image.height());
    ui->gv2->setScene(scene2);
    ui->gv2->fitInView(scene2->sceneRect());
}

void MainWindow::on_txt_rotation_angle_textChanged(const QString &arg1)
{
    try
    {
        bool isNumber = false;
        rotation_angle = arg1.toDouble(&isNumber); //숫자확인
        if (!isNumber)
            ui->txt_rotation_angle->setText(""); //문자제거
        else
            ui->txt_rotation_angle->setText(arg1.simplified()); //공백제거
    }
    catch(...)
    {
    }
}

void MainWindow::on_btn_resize_clicked()
{
    int resize_width = ui->gv1->width();
    int resize_height = ui->gv1->height();

    //각도, 해상도 초기화
    resize_image = image;
    ui->txt_rotation_angle->setText("0");
    ui->sbar_rotate->setValue(0);

    //graphicsview 삭제
    scene2->clear();

    try
    {
        bool isNumber1 = false;
        bool isNumber2 = false;
        resize_width = ui->txt_resize_width->text().toInt(&isNumber1);
        resize_height = ui->txt_resize_height->text().toInt(&isNumber2);

        if (isNumber1 && isNumber2)
        {
            ui->txt_rename->setText(QString::number(resize_width));
            resize_image = resize_image.scaled(resize_width, resize_height);

            scene2 = new QGraphicsScene(this);
            scene2->addPixmap(resize_image);
            scene2->setSceneRect(resize_image.rect());

            ui->gv2->setGeometry(ui->gv2->x(), ui->gv2->y(), resize_image.width(), resize_image.height());
            ui->gv2->setScene(scene2);
            ui->gv2->fitInView(scene2->sceneRect());

            ini_width_gv2 = ui->gv2->width();
            ini_height_gv2 = ui->gv2->height();
        }
    }
    catch(...)
    {}
}

void MainWindow::on_btn_resize_default_clicked()
{

}

void MainWindow::on_btn_rotation_clicked()
{
    ui->sbar_rotate->setValue(rotation_angle);
}

void MainWindow::on_btn_save_clicked()
{
//    ui->txt_rename->setText(imagePath);
}

void MainWindow::on_cb_hflip_clicked(bool checked)
{
    Mat hflip_image = imread(imagePath.toStdString());
}

void MainWindow::on_cb_vflip_clicked(bool checked)
{

}


void MainWindow::on_txt_resize_width_textChanged(const QString &arg1)
{
    int cal_height = arg1.toDouble() * image_ratio;
    ui->txt_resize_height->setText(QString::number(cal_height));
}
