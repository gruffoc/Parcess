#include "mainwindow.h"
#include <QApplication>

MainWindow *ptr_mainwindow;
int glob_i_uno = 0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ptr_mainwindow = new MainWindow;
    ptr_mainwindow->setFixedSize(281,350);
    ptr_mainwindow->show();

    //MainWindow w;
    //w.show();

    return a.exec();
}
