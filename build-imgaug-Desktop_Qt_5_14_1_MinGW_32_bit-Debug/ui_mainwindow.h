/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *actionE_xit;
    QAction *actionSave_AugImage;
    QWidget *centralWidget;
    QLineEdit *txt_path;
    QGraphicsView *gv1;
    QLabel *lbl_path;
    QLineEdit *txt_resize_width;
    QLineEdit *txt_resize_height;
    QSlider *sbar_rotate;
    QGraphicsView *gv2;
    QLabel *lbl_resize;
    QLabel *lbl_rotation;
    QPushButton *btn_resize;
    QLineEdit *txt_rotation_angle;
    QPushButton *btn_rotation;
    QCheckBox *cb_hflip;
    QCheckBox *cb_vflip;
    QPushButton *btn_resize_default;
    QListWidget *listWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 980);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionSave_AugImage = new QAction(MainWindow);
        actionSave_AugImage->setObjectName(QString::fromUtf8("actionSave_AugImage"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        txt_path = new QLineEdit(centralWidget);
        txt_path->setObjectName(QString::fromUtf8("txt_path"));
        txt_path->setGeometry(QRect(110, 10, 371, 25));
        txt_path->setReadOnly(true);
        gv1 = new QGraphicsView(centralWidget);
        gv1->setObjectName(QString::fromUtf8("gv1"));
        gv1->setGeometry(QRect(400, 40, 501, 280));
        lbl_path = new QLabel(centralWidget);
        lbl_path->setObjectName(QString::fromUtf8("lbl_path"));
        lbl_path->setGeometry(QRect(20, 12, 60, 20));
        QFont font;
        font.setPointSize(12);
        lbl_path->setFont(font);
        txt_resize_width = new QLineEdit(centralWidget);
        txt_resize_width->setObjectName(QString::fromUtf8("txt_resize_width"));
        txt_resize_width->setGeometry(QRect(110, 60, 50, 25));
        txt_resize_width->setMaxLength(4);
        txt_resize_height = new QLineEdit(centralWidget);
        txt_resize_height->setObjectName(QString::fromUtf8("txt_resize_height"));
        txt_resize_height->setGeometry(QRect(170, 60, 50, 25));
        txt_resize_height->setMaxLength(4);
        sbar_rotate = new QSlider(centralWidget);
        sbar_rotate->setObjectName(QString::fromUtf8("sbar_rotate"));
        sbar_rotate->setGeometry(QRect(110, 90, 140, 20));
        sbar_rotate->setMinimum(-180);
        sbar_rotate->setMaximum(180);
        sbar_rotate->setOrientation(Qt::Horizontal);
        gv2 = new QGraphicsView(centralWidget);
        gv2->setObjectName(QString::fromUtf8("gv2"));
        gv2->setGeometry(QRect(400, 330, 501, 280));
        sizePolicy.setHeightForWidth(gv2->sizePolicy().hasHeightForWidth());
        gv2->setSizePolicy(sizePolicy);
        lbl_resize = new QLabel(centralWidget);
        lbl_resize->setObjectName(QString::fromUtf8("lbl_resize"));
        lbl_resize->setGeometry(QRect(20, 63, 70, 20));
        lbl_resize->setFont(font);
        lbl_rotation = new QLabel(centralWidget);
        lbl_rotation->setObjectName(QString::fromUtf8("lbl_rotation"));
        lbl_rotation->setGeometry(QRect(20, 90, 70, 20));
        lbl_rotation->setFont(font);
        btn_resize = new QPushButton(centralWidget);
        btn_resize->setObjectName(QString::fromUtf8("btn_resize"));
        btn_resize->setGeometry(QRect(230, 60, 70, 25));
        btn_resize->setFont(font);
        txt_rotation_angle = new QLineEdit(centralWidget);
        txt_rotation_angle->setObjectName(QString::fromUtf8("txt_rotation_angle"));
        txt_rotation_angle->setGeometry(QRect(260, 90, 40, 25));
        txt_rotation_angle->setMaxLength(4);
        txt_rotation_angle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_rotation = new QPushButton(centralWidget);
        btn_rotation->setObjectName(QString::fromUtf8("btn_rotation"));
        btn_rotation->setGeometry(QRect(310, 90, 80, 25));
        btn_rotation->setFont(font);
        cb_hflip = new QCheckBox(centralWidget);
        cb_hflip->setObjectName(QString::fromUtf8("cb_hflip"));
        cb_hflip->setGeometry(QRect(20, 120, 92, 25));
        cb_hflip->setFont(font);
        cb_vflip = new QCheckBox(centralWidget);
        cb_vflip->setObjectName(QString::fromUtf8("cb_vflip"));
        cb_vflip->setGeometry(QRect(110, 120, 92, 25));
        cb_vflip->setFont(font);
        btn_resize_default = new QPushButton(centralWidget);
        btn_resize_default->setObjectName(QString::fromUtf8("btn_resize_default"));
        btn_resize_default->setGeometry(QRect(310, 60, 80, 25));
        btn_resize_default->setFont(font);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 170, 311, 721));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 890, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(txt_path, txt_resize_width);
        QWidget::setTabOrder(txt_resize_width, txt_resize_height);
        QWidget::setTabOrder(txt_resize_height, btn_resize);
        QWidget::setTabOrder(btn_resize, btn_resize_default);
        QWidget::setTabOrder(btn_resize_default, sbar_rotate);
        QWidget::setTabOrder(sbar_rotate, txt_rotation_angle);
        QWidget::setTabOrder(txt_rotation_angle, btn_rotation);
        QWidget::setTabOrder(btn_rotation, cb_hflip);
        QWidget::setTabOrder(cb_hflip, cb_vflip);
        QWidget::setTabOrder(cb_vflip, gv1);
        QWidget::setTabOrder(gv1, gv2);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(actionSave_AugImage);
        menu_File->addAction(actionE_xit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Main", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
        actionE_xit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionSave_AugImage->setText(QCoreApplication::translate("MainWindow", "Save AugImage", nullptr));
        lbl_path->setText(QCoreApplication::translate("MainWindow", "PATH", nullptr));
        txt_resize_width->setText(QString());
        lbl_resize->setText(QCoreApplication::translate("MainWindow", "Resize", nullptr));
        lbl_rotation->setText(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        btn_resize->setText(QCoreApplication::translate("MainWindow", "Resize", nullptr));
        txt_rotation_angle->setPlaceholderText(QString());
        btn_rotation->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        cb_hflip->setText(QCoreApplication::translate("MainWindow", "Hflip", nullptr));
        cb_vflip->setText(QCoreApplication::translate("MainWindow", "Vflip", nullptr));
        btn_resize_default->setText(QCoreApplication::translate("MainWindow", "Default", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
