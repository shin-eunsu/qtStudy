#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imgview.h"

QString ImagePATH;

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
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), QStandardPaths::writableLocation(QStandardPaths::HomeLocation),
                                                     tr("Image Files (*.png *.jpg *.bmp"));
    if (imagePath.isEmpty())
        return;

    imageObject = new QImage();
    imageObject->load(imagePath);
    image = QPixmap::fromImage(*imageObject);

    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());

    ui->gv1->setScene(scene);
    ui->gv1->fitInView(scene->sceneRect());
    ui->txt_path->setText(imagePath);

//    img_view = new ImgView(this);
//    img_view->show();
}

void MainWindow::on_actionE_xit_triggered()
{
    this->close();
}

void MainWindow::on_sbar_rotate_valueChanged(int value)
{
    QPixmap original_img = image;
    QMatrix rm;
    rm.rotate(value);

    static int ini_width = ui->gv2->width();
    static int ini_height = ui->gv2->height();

    original_img = original_img.scaled(ini_width, ini_height);
    original_img = original_img.transformed(rm);

    scene2 = new QGraphicsScene(this);
    scene2->addPixmap(original_img);
    scene2->setSceneRect(original_img.rect());

    ui->gv2->setGeometry(ui->gv2->x(), ui->gv2->y(), original_img.width(), original_img.height());
    ui->gv2->setScene(scene2);
    ui->gv2->fitInView(scene2->sceneRect());

    ui->txt_rename->setText(QString::number(value));
}


void MainWindow::on_btn_OK_clicked()
{
    QPixmap original_img = image;
//    original_img.scaled(ui->gv2->x(), ui->gv2->y());

    scene2 = new QGraphicsScene(this);
    scene2->addPixmap(original_img.scaled(200, 200));
    scene2->setSceneRect(original_img.rect());

    ui->gv2->setScene(scene2);
//    ui->gv2->fitInView(scene2->sceneRect());
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

void MainWindow::on_btn_rotation_ok_clicked()
{
    ui->sbar_rotate->setValue(rotation_angle);
}


