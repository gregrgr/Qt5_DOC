#include "subwidget.h"
#include "QDebug"
SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    btn1.setParent(this);
    btn1.setText("switch main window");
    connect(&btn1, &QPushButton::pressed,this,&SubWidget::sendSlot);
    resize(200,200);
}

void SubWidget::sendSlot(){
    emit changeWindow();
    qDebug()<<"Helloworld";
}
