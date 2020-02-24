#include "mainwindow.h"
#include <QAction>
#include <QDebug>
//菜单栏
#include <QMenu>
#include <QMenuBar>

//对话框
#include <QDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenuBar *mbar = menuBar();
    QMenu *menu = mbar->addMenu("File");
    QMenu *about = mbar->addMenu("About");
    //模态对话框
    QAction *pNew = menu->addAction("NEW");

    connect(pNew, &QAction::triggered,
            [=](){
     QDialog dlg;
     dlg.exec();
    });

    //非模态对话框
    QAction *pOpen = menu->addAction("OPEN");

    connect(pOpen, &QAction::triggered,
            [=](){
        //三种方式
        //第一种 匿名函数内部创建动态空间。缺点：容易内存溢出
        //QDialog *p = new QDialog(this);
        //p->show();
        //第二种 在头文件中声明变量，这里直接调用。
        //第三种 加上限定函数。
        QDialog *p = new QDialog(this);
        p->setAttribute(Qt::WA_DeleteOnClose);
        p->show();
    });

    QAction *pSave = menu->addAction("SAVE");
    connect(pSave,&QAction::triggered,
            [=](){
        QMessageBox msgBox;
        msgBox.setText("这个文件未保存.");
        msgBox.setInformativeText("你想保存吗?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        msgBox.setIcon(QMessageBox::Warning);
        int ret = msgBox.exec();
        switch (ret) {
            case QMessageBox::Save:
                // Save was clicked
            qDebug()<<"SAVE";
                break;
            case QMessageBox::Discard:
                // Don't Save was clicked
            qDebug()<<"DON'T SAVE";
                break;
            case QMessageBox::Cancel:
                // Cancel was clicked
            qDebug()<<"CANCEL";
                break;
            default:
                // should never be reached
                break;
          }
    }
            );

    QAction *pExit = menu->addAction("pExit");
    connect(pExit, &QAction::triggered,
            [=](){
        int ret = QMessageBox::question(this,"我是问题框","QMessageBox::Yes");
        switch(ret){
        case QMessageBox::Yes:
            qDebug()<<"Yes";
            break;
        case QMessageBox::No:
            qDebug()<<"NO";
            break;
        default:break;
        };
    }
            );

    QAction *pAbt = about->addAction("Abt");

    connect(pAbt, &QAction::triggered,
            [=](){
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        msgBox.exec();
    });

}

MainWindow::~MainWindow()
{
}

