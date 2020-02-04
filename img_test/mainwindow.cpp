#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Open_triggered()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"),
            QStandardPaths::writableLocation(QStandardPaths::HomeLocation),
            tr("Image Files (*.png *.jpg *.bmp)"));
    if (imagePath.isEmpty())
        return;

    imageObject = new QImage();
    imageObject->load(imagePath);
    image = QPixmap::fromImage(*imageObject);

    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui->graphicsView->setScene(scene);
    ui->graphicsView->fitInView(scene->sceneRect());

    ui->le1->setText(imagePath);
}

void MainWindow::on_action_Exit_triggered()
{
    this->close();
}
