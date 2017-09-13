#include "test.h"

test::test(QObject *parent) : QObject(parent)
{
    testInsideThread = new QThread();
    testStateMachine = new testQFSM();
    testStateMachine->moveToThread(testInsideThread);
    QObject::connect(testInsideThread, &QThread::started, testStateMachine, &testQFSM::testInsideThread);
    QObject::connect(testStateMachine, &testQFSM::signalSpontaneous, this, &test::repRandomSignal);
}

void test::init()
{
    QString connection = localDb.connectionName();
    localDb.close();
    localDb = QSqlDatabase();
    localDb.removeDatabase(connection);
    anError("Check non-empty : " << !connection.isEmpty());
    anError("After remove Connection : " << localDb.connectionName());

    anError("current Connection : " << localDb.connectionName());
    localDb = QSqlDatabase::addDatabase("QMYSQL");
    localDb.setHostName("localhost");
    localDb.setDatabaseName("raspberry");
    localDb.setUserName("root");
    localDb.setPassword("Ascenx123");
    localDb.setPort(3306);
    if (localDb.open())
    {
        anAck("OK Local Database Connected !");
        anError("current Connection : " << localDb.connectionName());
    }
    else
    {
        anError("Failed To Connect Local Database !");
    }
    anError("current Connection : " << localDb.connectionName());
    testInsideThread->start();
}

void test::selfReceive(QString data)
{
    if (!data.isNull())
        qDebug() << "Data: " << data;
    qDebug() << "-------------------";
}

void test::slotA()
{
    qDebug() << "slotA activated !";
}

void test::slotB()
{
    qDebug() << "slotB activated !";
}

void test::repRandomSignal()
{
    QSqlQuery tmpQuery;
    tmpQuery.exec("SELECT RFID FROM stations");
    tmpQuery.next();
    anWarn("RFID: " << tmpQuery.value("RFID").toString());
}
