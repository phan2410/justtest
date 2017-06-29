#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include "anlogger.h"
#include <QThread>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QByteArray test = "iknowit";
    anVar(test.toHex());

    return a.exec();
}
