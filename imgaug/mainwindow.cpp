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
    ui->le_path->setText(imagePath);

    img_view = new ImgView(this);
    img_view->show();
}

void MainWindow::on_actionE_xit_triggered()
{
    this->close();
}

void MainWindow::on_btn_test_clicked()
{

}
