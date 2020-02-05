#-------------------------------------------------
#
# Project created by QtCreator 2020-02-04T16:43:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = imgaug
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    imgview.cpp

HEADERS += \
        mainwindow.h \
    imgview.h

FORMS += \
        mainwindow.ui \
    imgview.ui

INCLUDEPATH += /usr/local/include/opencv4/opencv2 /usr/local/include
LIBS += `pkg-config --libs opencv`
LIBS += -L/usr/lib/x86_64-linux-gnu/ -lopencv_core -lopencv_imgcodecs -lopencv_highgui
LIBS += -L/usr/local/lib -lopencv_shape -lopencv_videoio
-lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_shape -lopencv_videoio -lopencv_calib3d -lopencv_face
#LIBS += -L/home/mike/Qt5.12.0/5.12.0/gcc_64/lib
