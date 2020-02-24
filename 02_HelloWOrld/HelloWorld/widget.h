#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <subwidget.h>

class Widget : public QWidget
{
    Q_OBJECT
private:
    QPushButton bt1, *bt2, bt3;
    SubWidget sub;
public:
    Widget(QWidget *parent = nullptr);
    void mySlot();
    void myShow();
    void myShowMain();
    ~Widget();
};
#endif // WIDGET_H
