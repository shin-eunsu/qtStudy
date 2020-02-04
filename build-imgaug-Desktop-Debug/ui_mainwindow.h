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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QCheckBox *cb_resize;
    QCheckBox *cb_rotate;
    QCheckBox *cb_hflip;
    QCheckBox *cb_vfliap;
    QCheckBox *cb_rename;
    QLineEdit *le_path;
    QGraphicsView *gv1;
    QPushButton *btn_test;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(522, 399);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        cb_resize = new QCheckBox(centralWidget);
        cb_resize->setObjectName(QStringLiteral("cb_resize"));
        cb_resize->setGeometry(QRect(20, 20, 92, 23));
        cb_rotate = new QCheckBox(centralWidget);
        cb_rotate->setObjectName(QStringLiteral("cb_rotate"));
        cb_rotate->setGeometry(QRect(20, 60, 92, 23));
        cb_hflip = new QCheckBox(centralWidget);
        cb_hflip->setObjectName(QStringLiteral("cb_hflip"));
        cb_hflip->setGeometry(QRect(20, 90, 92, 23));
        cb_vfliap = new QCheckBox(centralWidget);
        cb_vfliap->setObjectName(QStringLiteral("cb_vfliap"));
        cb_vfliap->setGeometry(QRect(20, 130, 92, 23));
        cb_rename = new QCheckBox(centralWidget);
        cb_rename->setObjectName(QStringLiteral("cb_rename"));
        cb_rename->setGeometry(QRect(20, 170, 92, 23));
        le_path = new QLineEdit(centralWidget);
        le_path->setObjectName(QStringLiteral("le_path"));
        le_path->setGeometry(QRect(80, 280, 311, 25));
        gv1 = new QGraphicsView(centralWidget);
        gv1->setObjectName(QStringLiteral("gv1"));
        gv1->setGeometry(QRect(210, 50, 256, 192));
        btn_test = new QPushButton(centralWidget);
        btn_test->setObjectName(QStringLiteral("btn_test"));
        btn_test->setGeometry(QRect(410, 290, 89, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 522, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(actionE_xit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_Open->setText(QApplication::translate("MainWindow", "&Open", Q_NULLPTR));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        cb_resize->setText(QApplication::translate("MainWindow", "Resize", Q_NULLPTR));
        cb_rotate->setText(QApplication::translate("MainWindow", "Rotate", Q_NULLPTR));
        cb_hflip->setText(QApplication::translate("MainWindow", "Hflip", Q_NULLPTR));
        cb_vfliap->setText(QApplication::translate("MainWindow", "Vflip", Q_NULLPTR));
        cb_rename->setText(QApplication::translate("MainWindow", "Rename", Q_NULLPTR));
        btn_test->setText(QApplication::translate("MainWindow", "test", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
