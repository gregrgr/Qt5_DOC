#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <mybutton.h>

class MyWidget : public QWidget
{
    Q_OBJECT   
public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
};
#endif // MYWIDGET_H
