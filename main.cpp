#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include "anlogger.h"
#include <QThread>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    try{
        if (abc)
            std::cout << "okay message will be shown !" << std::endl;
    } catch (...) {}


    return a.exec();
}
