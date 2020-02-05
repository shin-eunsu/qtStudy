/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
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
    QWidget *centralWidget;
    QLineEdit *txt_path;
    QGraphicsView *gv1;
    QLabel *lbl_path;
    QListView *listView;
    QLineEdit *txt_resize_width;
    QLineEdit *txt_resize_height;
    QSlider *sbar_rotate;
    QLineEdit *txt_rename;
    QGraphicsView *gv2;
    QPushButton *btn_save;
    QLabel *lbl_resize;
    QLabel *lbl_rotation;
    QLabel *lbl_rename;
    QPushButton *btn_resize;
    QLineEdit *txt_rotation_angle;
    QPushButton *btn_rotation;
    QCheckBox *cb_hflip;
    QCheckBox *cb_vflip;
    QPushButton *btn_resize_default;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 980);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        txt_path = new QLineEdit(centralWidget);
        txt_path->setObjectName(QStringLiteral("txt_path"));
        txt_path->setGeometry(QRect(110, 10, 371, 25));
        txt_path->setReadOnly(true);
        gv1 = new QGraphicsView(centralWidget);
        gv1->setObjectName(QStringLiteral("gv1"));
        gv1->setGeometry(QRect(400, 40, 501, 280));
        lbl_path = new QLabel(centralWidget);
        lbl_path->setObjectName(QStringLiteral("lbl_path"));
        lbl_path->setGeometry(QRect(20, 12, 60, 20));
        QFont font;
        font.setPointSize(12);
        lbl_path->setFont(font);
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 260, 270, 341));
        txt_resize_width = new QLineEdit(centralWidget);
        txt_resize_width->setObjectName(QStringLiteral("txt_resize_width"));
        txt_resize_width->setGeometry(QRect(110, 60, 50, 25));
        txt_resize_width->setMaxLength(4);
        txt_resize_height = new QLineEdit(centralWidget);
        txt_resize_height->setObjectName(QStringLiteral("txt_resize_height"));
        txt_resize_height->setGeometry(QRect(170, 60, 50, 25));
        txt_resize_height->setMaxLength(4);
        sbar_rotate = new QSlider(centralWidget);
        sbar_rotate->setObjectName(QStringLiteral("sbar_rotate"));
        sbar_rotate->setGeometry(QRect(110, 90, 140, 20));
        sbar_rotate->setMinimum(-180);
        sbar_rotate->setMaximum(180);
        sbar_rotate->setOrientation(Qt::Horizontal);
        txt_rename = new QLineEdit(centralWidget);
        txt_rename->setObjectName(QStringLiteral("txt_rename"));
        txt_rename->setGeometry(QRect(110, 160, 170, 25));
        gv2 = new QGraphicsView(centralWidget);
        gv2->setObjectName(QStringLiteral("gv2"));
        gv2->setGeometry(QRect(400, 330, 501, 280));
        btn_save = new QPushButton(centralWidget);
        btn_save->setObjectName(QStringLiteral("btn_save"));
        btn_save->setGeometry(QRect(290, 160, 70, 25));
        btn_save->setFont(font);
        lbl_resize = new QLabel(centralWidget);
        lbl_resize->setObjectName(QStringLiteral("lbl_resize"));
        lbl_resize->setGeometry(QRect(20, 63, 70, 20));
        lbl_resize->setFont(font);
        lbl_rotation = new QLabel(centralWidget);
        lbl_rotation->setObjectName(QStringLiteral("lbl_rotation"));
        lbl_rotation->setGeometry(QRect(20, 90, 70, 20));
        lbl_rotation->setFont(font);
        lbl_rename = new QLabel(centralWidget);
        lbl_rename->setObjectName(QStringLiteral("lbl_rename"));
        lbl_rename->setGeometry(QRect(20, 160, 70, 20));
        lbl_rename->setFont(font);
        btn_resize = new QPushButton(centralWidget);
        btn_resize->setObjectName(QStringLiteral("btn_resize"));
        btn_resize->setGeometry(QRect(230, 60, 70, 25));
        btn_resize->setFont(font);
        txt_rotation_angle = new QLineEdit(centralWidget);
        txt_rotation_angle->setObjectName(QStringLiteral("txt_rotation_angle"));
        txt_rotation_angle->setGeometry(QRect(260, 90, 40, 25));
        txt_rotation_angle->setMaxLength(4);
        txt_rotation_angle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_rotation = new QPushButton(centralWidget);
        btn_rotation->setObjectName(QStringLiteral("btn_rotation"));
        btn_rotation->setGeometry(QRect(310, 90, 80, 25));
        btn_rotation->setFont(font);
        cb_hflip = new QCheckBox(centralWidget);
        cb_hflip->setObjectName(QStringLiteral("cb_hflip"));
        cb_hflip->setGeometry(QRect(20, 120, 92, 25));
        cb_hflip->setFont(font);
        cb_vflip = new QCheckBox(centralWidget);
        cb_vflip->setObjectName(QStringLiteral("cb_vflip"));
        cb_vflip->setGeometry(QRect(110, 120, 92, 25));
        cb_vflip->setFont(font);
        btn_resize_default = new QPushButton(centralWidget);
        btn_resize_default->setObjectName(QStringLiteral("btn_resize_default"));
        btn_resize_default->setGeometry(QRect(310, 60, 80, 25));
        btn_resize_default->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        QWidget::setTabOrder(cb_vflip, txt_rename);
        QWidget::setTabOrder(txt_rename, btn_save);
        QWidget::setTabOrder(btn_save, listView);
        QWidget::setTabOrder(listView, gv1);
        QWidget::setTabOrder(gv1, gv2);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(actionE_xit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Main", Q_NULLPTR));
        action_Open->setText(QApplication::translate("MainWindow", "&Open", Q_NULLPTR));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        lbl_path->setText(QApplication::translate("MainWindow", "PATH", Q_NULLPTR));
        txt_resize_width->setText(QString());
        btn_save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        lbl_resize->setText(QApplication::translate("MainWindow", "Resize", Q_NULLPTR));
        lbl_rotation->setText(QApplication::translate("MainWindow", "Rotation", Q_NULLPTR));
        lbl_rename->setText(QApplication::translate("MainWindow", "Rename", Q_NULLPTR));
        btn_resize->setText(QApplication::translate("MainWindow", "Resize", Q_NULLPTR));
        txt_rotation_angle->setPlaceholderText(QString());
        btn_rotation->setText(QApplication::translate("MainWindow", "Rotate", Q_NULLPTR));
        cb_hflip->setText(QApplication::translate("MainWindow", "Hflip", Q_NULLPTR));
        cb_vflip->setText(QApplication::translate("MainWindow", "Vflip", Q_NULLPTR));
        btn_resize_default->setText(QApplication::translate("MainWindow", "Default", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
