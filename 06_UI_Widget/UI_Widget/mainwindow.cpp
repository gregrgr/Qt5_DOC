#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btn,&QPushButton::clicked,
            [=](){
            ui->label->setText("Hello World");
    }
            );

}

MainWindow::~MainWindow()
{
    delete ui;
}

