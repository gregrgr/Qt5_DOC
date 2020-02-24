#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    bt1.setParent(this);
    bt1.setText("Botton1");

    connect(&bt1,&QAbstractButton::pressed,this, &Widget::close);

    bt2 = new QPushButton(this);
    bt2->setText("Botton2");
    bt2->move(100,0);
    connect(bt2, &QPushButton::released, this, &Widget::mySlot);

    bt3.setParent(this);
    bt3.setText("switch second windows");
    bt3.move(200,0);
    connect(&bt3,&QPushButton::pressed,this,&Widget::myShow);

    connect(&sub,&SubWidget::changeWindow,this,&Widget::myShowMain);
    resize(400,300);
}

void Widget::mySlot(){
    bt2->setText("OK");
}

void Widget::myShow(){
    this->hide();
    sub.show();
}

void Widget::myShowMain(){
    this->show();
    sub.hide();
}

Widget::~Widget()
{
}

