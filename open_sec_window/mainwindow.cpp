#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"

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

void MainWindow::on_open_window_clicked()
{
//    SecDialog secdialog;
//    secdialog.setModal(true);
//    secdialog.exec();
    secdialog = new SecDialog(this);
    secdialog->show();
}
