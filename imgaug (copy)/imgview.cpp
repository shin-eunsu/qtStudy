#include "imgview.h"
#include "ui_imgview.h"

ImgView::ImgView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImgView)
{
    ui->setupUi(this);
}

ImgView::~ImgView()
{
    delete ui;
}
