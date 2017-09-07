#include "testqfsm2.h"

testqfsm2::testqfsm2(testQFSMDB * database) : dbPtr(database)
{

}

void testqfsm2::onEntry(QEvent *)
{
    anAck("State Entered 2");
    emit dbPtr->signalB();
}

void testqfsm2::onExit(QEvent *)
{
    anAck("Leave State 2");
}
