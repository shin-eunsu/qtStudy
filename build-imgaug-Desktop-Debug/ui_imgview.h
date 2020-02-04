/********************************************************************************
** Form generated from reading UI file 'imgview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMGVIEW_H
#define UI_IMGVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ImgView
{
public:
    QGraphicsView *gv1;

    void setupUi(QDialog *ImgView)
    {
        if (ImgView->objectName().isEmpty())
            ImgView->setObjectName(QStringLiteral("ImgView"));
        ImgView->resize(700, 526);
        gv1 = new QGraphicsView(ImgView);
        gv1->setObjectName(QStringLiteral("gv1"));
        gv1->setGeometry(QRect(0, 0, 700, 526));

        retranslateUi(ImgView);

        QMetaObject::connectSlotsByName(ImgView);
    } // setupUi

    void retranslateUi(QDialog *ImgView)
    {
        ImgView->setWindowTitle(QApplication::translate("ImgView", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImgView: public Ui_ImgView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMGVIEW_H
