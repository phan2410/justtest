#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include "anlogger.h"
#include <algorithm>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    anSetConsoleTextAttribute(anForegroundMagenta);

    anAck("Success !");
    anInfo("It is running !");
    anWarning("too disappointed !");
    anError("oh no it failed !");

    std::cout << "END PROGRAM !" << std::endl;

    return a.exec();
}
