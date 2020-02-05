#ifndef IMGVIEW_H
#define IMGVIEW_H

#include <QDialog>

namespace Ui {
class ImgView;
}

class ImgView : public QDialog
{
    Q_OBJECT

public:
    explicit ImgView(QWidget *parent = 0);
    ~ImgView();

private:
    Ui::ImgView *ui;
};

#endif // IMGVIEW_H
