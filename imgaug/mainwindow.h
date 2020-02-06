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
#include <qlistwidget.h>

//#include <opencv2/opencv.hpp>
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>

void open_GraphicsView1();


//using namespace cv;
using namespace std;

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

    void on_txt_rotation_angle_textChanged(const QString &arg1);

    void on_btn_resize_clicked();

    void on_btn_rotation_clicked();

    void on_sbar_rotate_valueChanged(int value);

    void on_cb_hflip_clicked(bool checked);

    void on_cb_vflip_clicked(bool checked);

    void on_btn_resize_default_clicked();

    void on_txt_resize_width_textChanged(const QString &arg1);

    void on_actionSave_AugImage_triggered();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QString imagePath;
    ImgView *img_view;

    QPixmap image;
    QImage *imageObject;
    QPixmap rotate_image;
    QPixmap resize_image;
    QPixmap save_image;
//    QMatrix rm;

    QGraphicsScene *scene;
    QGraphicsScene *scene2;

    int ini_width_gv2;
    int ini_height_gv2;

    double image_ratio;
    double rotation_angle;    
};

#endif // MAINWINDOW_H
