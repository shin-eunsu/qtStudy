#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    imagePATH = QFileDialog::getOpenFileName(this, tr("Image Open"), QStandardPaths::writableLocation(QStandardPaths::HomeLocation),
                                             tr("Image Files (*.png *.jpg *.bmp"));
    if(imagePATH.isEmpty())
        return;

    imageObj = new QImage();
    imageObj->load(imagePATH);
    image = QPixmap::fromImage(*imageObj);
    image_ratio = image.height() / double(image.width());

    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());

    ui->gv1->setScene(scene);
    ui->gv1->fitInView(scene->sceneRect());
    ui->txt_path->setText(imagePath);
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
