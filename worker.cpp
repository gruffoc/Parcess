#include "worker.h"
#include "unistd.h"
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
extern MainWindow *ptr_mainwindow;
extern int glob_i_uno;
Worker::Worker()
{
    //t = time;

}

Worker::~Worker()
{

}

void Worker::process(){
    int i = 0;
    while(1){
        i++;
        glob_i_uno = i;
        sleep(1);
        std::cout<<i<<"\n";
        ptr_mainwindow->write1();
    }
}
