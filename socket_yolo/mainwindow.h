#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFileDialog>
#include <QImageReader>
#include <QImageWriter>
#include <QStandardPaths>

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

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;

    //image
    QString imagePATH;
    QPixmap image;
    QImage *imageObj;

    QGraphicsScene *scene;

    double image_ratio;
};

#endif // MAINWINDOW_H
