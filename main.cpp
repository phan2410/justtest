#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include "anlogger.h"
#include <QThread>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread::currentThread()->setPriority(QThread::HighestPriority);
    anAck(QThread::currentThread()->priority());

    return a.exec();
}
