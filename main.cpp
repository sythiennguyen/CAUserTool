#include "loginwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.setWindowIcon(QIcon(":/images/ms_icon32.png"));
    w.show();
    return a.exec();
}
