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

bool checkCameraAvailability()
{
    if(QCameraInfo::availableCameras().count() > 0)
        return true;
    else
        return false;
}

void MainWindow::on_btn_test_clicked()
{
}
