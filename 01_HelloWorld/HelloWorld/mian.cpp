#include <QApplication>
//引入窗口控件基类
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    QWidget w;
    w.setWindowTitle("01QT之旅");

    //控件上显示按钮需要按钮设定父对象
    QPushButton bnt(&w), bnt1;
    bnt.setText("Botton1");
    bnt1.setParent(&w);
    bnt1.click();
    bnt1.setText("Botton2");
    bnt1.move(200,200);
    w.show();





    return a.exec();
}
