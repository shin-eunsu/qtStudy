#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "imgview.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFileDialog>
#include <QImageReader>
#include <QImageWriter>
#include <QStandardPaths>

#include <opencv2/opencv.hpp>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_Open_triggered();

    void on_actionE_xit_triggered();

    void on_btn_test_clicked();

private:
    Ui::MainWindow *ui;
    ImgView *img_view;

    QPixmap image;
    QImage *imageObject;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW_H
