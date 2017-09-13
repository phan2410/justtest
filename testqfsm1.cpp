#include "testqfsm1.h"

testqfsm1::testqfsm1(testQFSMDB * database, quint16 delayTimeInMSec) :
    dbPtr(database)
{
    timer.setParent(this);
    timer.setInterval(delayTimeInMSec);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [database](){
        anAck("Start TEST !");
        emit database->directTransitionRequest("state2");
    });
}

void testqfsm1::onEntry(QEvent *)
{
    anAck("State Entered");
    timer.start();
}

void testqfsm1::onExit(QEvent *)
{
    anAck("Leave State");
    timer.stop();
}
