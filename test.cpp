#include "test.h"

test::test(QObject *parent) : QObject(parent)
{

}

void test::selfReceive(QString data)
{
    if (!data.isNull())
        qDebug() << "Data: " << data;
    qDebug() << "-------------------";
}
