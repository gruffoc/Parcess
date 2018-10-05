#ifndef WORKER_H
#define WORKER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QString>

class Worker : public QObject {
    Q_OBJECT

public:
    Worker();
    ~Worker();

public slots:
    void process();

private:
    //double t;


signals:
    void finished();
    void error(QString err);


};

#endif // WORKER_H
