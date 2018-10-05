#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "worker.h"
#include <QThread>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void write1();
public slots:
    void start1();
    void stop1();

private:
    Ui::MainWindow *ui;
    //QThread *tt1 = new QThread();
    QThread *tt2 = new QThread();
    QThread *tt3 = new QThread();
    //Worker  *wo1 = new Worker();
    Worker  *wo2 = new Worker();
    Worker  *wo3 = new Worker();

signals:
    void work1();
    void no_work1();


};

#endif // MAINWINDOW_H
