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
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>



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

    void on_btn_OK_clicked();

    void on_txt_rotation_angle_textChanged(const QString &arg1);

    void on_btn_rotation_ok_clicked();

    void on_sbar_rotate_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    ImgView *img_view;

    QPixmap image;
    QImage *imageObject;
    QGraphicsScene *scene;
    QGraphicsScene *scene2;

    double rotation_angle;
};

#endif // MAINWINDOW_H
