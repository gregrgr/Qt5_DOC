# QT学习笔记
## QT基本使用方法
- 自带IDE创建工程
- xxx.pro --> 工程的加载配置文件
- main.cpp --> 程序的执行
- 组件类的使用方法
1. EG: `QPushbutton`
    使用时须指定父对象。瑞国不指定父对象，对象和对象之间没有关系，独立。
    指定父对象的方式有两种：
        1> setParent
        2> 通过构造函数传递参数
    指定父对象后，只需父对象显示，上面的子对象自动显示。
2. EG: `connect(&b1, &QPushButton::pressed, this, &MainWidget::close);`
    * `&b1`:信号发出者，指针
    * `&QPushButton::pressed`:处理的信号， &发送者的类名::信号名字
    * `this`:信号的接受者
    * `&MainWidget::close`:槽函数，信号处理函数， &接受者的类名::槽函数名字
3. 自定义信号
    信号和信号槽，信号类比于手机，槽类比接收短信的手机。
    1. 信号：普通函数(signals:),只需声明无需实现。
    2. 槽函数：Qt5类中的任意成员函数，静态函数，全局函数，Lambda表达式
    3. 信号和槽可以使用QT内部定义好的，也可以使用自定义的。
    4. 信号和槽没有返回值，但是可以有参数。
    5. 信号和槽的参数列表顺序必须一致。
    eg: 
    ```C++
    void sig1(int, double, char);
    void slot1(int, double, char);
     ``` 
    6. 信号和槽的参数个数可以不一样；信号的参数个数可以大于槽函数参数对的个数；槽函数参数的个数不可大于信号参数个数。
    
    需要在头文件类声明中signals权限下声明信号函数（无返回值）。
    使用时加emit使用。`emit changeWindow();`
    如果在传奇信号时发生函数重载，则需要声明函数指针通过指针调用。
    eg：
    ```C++
    void (SubWidget::*funSignal)() = &SubWidget::mySignal;
    connect(&subWin, funSignal, this, &MainWidget::dealSub);

    void (SubWidget::*testSignal)(int, QString) = &SubWidget::mySignal;
    connect(&subWin, testSignal, this, &MainWidget::dealSub);
    ```
4. Qt4信号连接
    ```C++
    connect(&subWin, SIGNAL(mySignal()), this , SLOT(dealSub()));
    ```
    Qt4信号槽必须有slots关键字来修饰。
    SIGNAL SLOT 将函数名字 -> 字符串 不进行错误检查
5. Lambda表达式
    匿名函数对象.
    C++11特性，项目文件添加CONFIG += C++11.
    ```C++
    connect(b4, &QPushButton::clicked,
        // =:吧外部所有局部变量、类中所有成员以值得方式传递
        // this:类中所有成员以值的方式传递
        // & :把外部所有局部变量， 引用符号
        [=](bool isCheck) //mutable
        {
            //执行相应的操作
        }
    );
    ```
6. 内存回收
    指定父对象后，直接过间接继承于QObject；
    子对象如果是动态分配空间的new，不需要手动释放delete，系统会自动释放

7. 工具栏 菜单栏 状态栏 核心控件 浮动窗口
    ```C++
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
    ```
8. 模态对话框和非模态对话框
    ```C++
    QMenuBar *mbar = menuBar();
    QMenu *menu = mbar->addMenu("File");
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
    ```
9. 问题对话框
    创建方式1
    ```C++
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
    ```
    创建方式2
    ```C++
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
    ```
10. 文件框
    ```C++
    connect(pOpen, &QAction::triggered,
            [=](){
            QString path =  QFileDialog::getOpenFileName(this, tr("Open File"),
                                         "/home/",
                                         "Images (*.png *.xpm *.jpg)");
            qDebug()<<path;
    }

    );
    ```