/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(649, 436);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iamge/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iamge/image/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iamge/image/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iamge/image/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iamge/image/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/iamge/image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/iamge/image/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/iamge/image/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/iamge/image/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/iamge/image/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/iamge/image/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionFont = new QAction(Notepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/iamge/image/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionAbout = new QAction(Notepad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/iamge/image/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon12);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 649, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSave_as);
        menu->addAction(actionPrint);
        menu->addSeparator();
        menu->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFont);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_as);
        toolBar->addAction(actionPrint);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionFont);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QApplication::translate("Notepad", "New", nullptr));
        actionOpen->setText(QApplication::translate("Notepad", "Open", nullptr));
        actionSave->setText(QApplication::translate("Notepad", "Save", nullptr));
        actionSave_as->setText(QApplication::translate("Notepad", "Save as", nullptr));
        actionPrint->setText(QApplication::translate("Notepad", "Print", nullptr));
        actionExit->setText(QApplication::translate("Notepad", "Exit", nullptr));
        actionCopy->setText(QApplication::translate("Notepad", "Copy", nullptr));
        actionCut->setText(QApplication::translate("Notepad", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("Notepad", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("Notepad", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("Notepad", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("Notepad", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionFont->setText(QApplication::translate("Notepad", "Font", nullptr));
        actionAbout->setText(QApplication::translate("Notepad", "About", nullptr));
        menu->setTitle(QApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("Notepad", "Edit", nullptr));
        menuAbout->setTitle(QApplication::translate("Notepad", "Other", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
