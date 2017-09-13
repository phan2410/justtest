#include "testqfsmdb.h"

testQFSMDB::testQFSMDB(QObject *parent) : QObject(parent)
{
    invoker.setParent(this);
    invoker.setInterval(0);
    invoker.setSingleShot(true);
    QObject::connect(&invoker, &QTimer::timeout, this, [&](){
        emitSignalA();
    });
}

void testQFSMDB::startTimerEmitSignalA()
{
    invoker.start();
}

void testQFSMDB::emitSignalA()
{
    anAck("Intentionally emit signalA");
    emit signalA();
}
