#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include "anlogger.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    anMsg("this is a test!", anForegroundGreen);

    return a.exec();
}
