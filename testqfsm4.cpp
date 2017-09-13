#include "testqfsm4.h"

testqfsm4::testqfsm4()
{

}

void testqfsm4::onEntry(QEvent *)
{
    anAck("State Entered 4");
}

void testqfsm4::onExit(QEvent *)
{
    anAck("Leave State 4");
}

