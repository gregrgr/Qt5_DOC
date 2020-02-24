#include "mylabel.h"


MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{

}
//鼠标按下
void MyLabel::mousePressEvent(QMouseEvent *ev){
    int x = ev->x();
    int y = ev->y();
    QString text = QString("<center><h1>MousePress Local:(%1,%2)</h1></center>").arg(x).arg(y);
    switch (ev->buttons()) {
        case Qt::LeftButton:
            this->setText(text);
        break;
        case Qt::RightButton:
        break;
    }

}
//鼠标弹起
void MyLabel::mouseReleaseEvent(QMouseEvent *ev){
    int x = ev->x();
    int y = ev->y();
    QString text = QString("<center><h1>MouseRelease Local:(%1,%2)</h1></center>").arg(x).arg(y);
    switch (ev->buttons()) {
        case Qt::LeftButton:
            this->setText(text);
        break;
        case Qt::RightButton:
        break;
    }
}
//鼠标移动
void MyLabel::mouseMoveEvent(QMouseEvent *ev){
    int x = ev->x();
    int y = ev->y();
    QString text = QString("<center><h1>MouseMove Local:(%1,%2)</h1></center>").arg(x).arg(y);
    switch (ev->buttons()) {
        case Qt::LeftButton:
            this->setText(text);
        break;
        case Qt::RightButton:
        break;
    }
}
