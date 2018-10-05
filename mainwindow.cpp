#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "worker.h"
#include "QThread"
#include <iostream>


extern int glob_i_uno;
QThread *tt1;
Worker  *wo1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tt1 = new QThread();
    wo1 = new Worker();

    wo1->moveToThread(tt1);
    connect(tt1, SIGNAL(started()), wo1, SLOT(process()));
    connect(ui->btn_start1, SIGNAL(clicked(bool)), this, SLOT(start1()) );




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start1()
{
   tt1->start();
}
void MainWindow::stop1()
{
    emit no_work1();
}



void MainWindow::write1()
{
    std::cout<<"Ciao!"<<"\n";
    ui->textEdit->append(QString::number(glob_i_uno));
}
