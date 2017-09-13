#include "testqfsm2.h"

testqfsm2::testqfsm2(testQFSMDB * database, quint16 delayTransInMSecs):
    dbPtr(database)
{
    timer.setParent(this);
    timer.setInterval(delayTransInMSecs);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [database](){
        anAck("Transition Happens ...");
        emit database->signalB();
    });
}

void testqfsm2::onEntry(QEvent *)
{
    anAck("State Entered 2");
//    timer.start();
    anAck("Emit Signal B");
    emit dbPtr->signalB();
}

void testqfsm2::onExit(QEvent *)
{
    anAck("Leave State 2");
//    timer.stop();
}
