#include "mymainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QDebug>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QTextEdit>
#include <QDockWidget>

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenuBar *mBar = menuBar();
    QMenu *pFile = mBar->addMenu("File");
    QAction *pNew = pFile->addAction("New");
    QAction *pOpen = pFile->addAction("Open");
    pFile->addSeparator();

    //工具栏菜单栏

    QToolBar *toolBar = addToolBar("tootlBar");
    toolBar->addAction(pNew);

    QPushButton *bt1 = new QPushButton(toolBar);
    bt1->setText("NEW");
    toolBar->addWidget(bt1);


    connect(pNew, &QAction::triggered,
            [=](){
        qDebug()<<"文件新建";
    }
            );
    connect(pOpen, &QAction::triggered,
            [=](){
        qDebug()<<"文件打开";
    }
            );

    //状态栏
    QStatusBar *sBar = statusBar();
    QLabel *label = new QLabel(this);
    label->setText("Nomal text file");
    sBar->addWidget(label);

    //核心控件
    QTextEdit *textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);

    //浮动窗口
    QDockWidget *dock = new QDockWidget(this);
    addDockWidget(Qt::LeftDockWidgetArea,dock);


}

MyMainWindow::~MyMainWindow()
{
}

