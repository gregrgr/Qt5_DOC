#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    MyButton *btn1 = new MyButton(this);
    btn1->setText("click me");

}

MyWidget::~MyWidget()
{
}

