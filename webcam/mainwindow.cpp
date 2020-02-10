#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCamera>
#include <QCameraViewfinder>
#include <QVBoxLayout>
#include <QMenu>
#include <QAction>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mCamera = new QCamera(this);
    mCameraViewfinder = new QCameraViewfinder(this);
    mCameraImageCapture = new QCameraImageCapture(mCamera, this);
    mLayout = new QVBoxLayout;
    mOpcionesMenu = new QMenu("Opciones", this);
    mEncenderAction = new QAction("Encender", this);
    mCapturarAction = new QAction("Capturar", this);
    mApagaAction = new QAction("Apagar", this);

    mOpcionesMenu->addActions({mEncenderAction, mApagaAction, mCapturarAction});
    ui->btn_test->setMenu(mOpcionesMenu);
    mCamera->setViewfinder(mCameraViewfinder);
    mLayout->addWidget(mCameraViewfinder);
    mLayout->setMargin(0);
    ui->scrollArea->setLayout(mLayout);

    connect(mEncenderAction, &QAction::triggered, [&](){
        mCamera->stop();
    });
    connect(mApagaAction, &QAction::triggered, [&](){
        mCamera->stop();
    });
    connect(mCapturarAction, &QAction::triggered, [&](){
        auto filename = QFileDialog ::getSaveFileName(this, "Capturar", "/home/cu", "Image (*.jpg, *.jpeg)");
        if(filename.isEmpty())
        {
            return;
        }

        mCameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
        QImageEncoderSettings imageEcoderSettings;
        imageEcoderSettings.setCodec("image/jpg");
        imageEcoderSettings.setResolution(1600, 1200);
        mCameraImageCapture->setEncodingSettings(imageEcoderSettings);
        mCamera->setCaptureMode(QCamera::CaptureStillImage);
        mCamera->start();
        mCamera->searchAndLock();
        mCameraImageCapture->capture(filename);
        mCamera->unlock();
    });
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
