#include "mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenuBar    *pMenu = menuBar();
    QMenu *pFile = pMenu->addMenu("File");
    QAction *pNew = pFile->addAction("New");
    QAction *pOpen = pFile->addAction("Open");
    QAction *pSave = pFile->addAction("Save");
    QAction *pClose = pFile->addAction("Close");

    connect(pOpen, &QAction::triggered,
            [=](){
            QString path =  QFileDialog::getOpenFileName(this, tr("Open File"),
                                         tr("/home/"),
                                         "Images (*.png *.xpm *.jpg)");
            qDebug()<<path;
    }

    );


}

MainWindow::~MainWindow()
{
}

