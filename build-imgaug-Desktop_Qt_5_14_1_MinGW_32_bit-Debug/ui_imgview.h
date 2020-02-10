/********************************************************************************
** Form generated from reading UI file 'imgview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMGVIEW_H
#define UI_IMGVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>

QT_BEGIN_NAMESPACE

class Ui_ImgView
{
public:
    QGraphicsView *gv1;

    void setupUi(QDialog *ImgView)
    {
        if (ImgView->objectName().isEmpty())
            ImgView->setObjectName(QString::fromUtf8("ImgView"));
        ImgView->resize(700, 526);
        gv1 = new QGraphicsView(ImgView);
        gv1->setObjectName(QString::fromUtf8("gv1"));
        gv1->setGeometry(QRect(0, 0, 700, 526));

        retranslateUi(ImgView);

        QMetaObject::connectSlotsByName(ImgView);
    } // setupUi

    void retranslateUi(QDialog *ImgView)
    {
        ImgView->setWindowTitle(QCoreApplication::translate("ImgView", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImgView: public Ui_ImgView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMGVIEW_H
