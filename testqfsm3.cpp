#include "testqfsm3.h"

testqfsm3::testqfsm3()
{

}

void testqfsm3::onEntry(QEvent *)
{
    anAck("State Entered 3");
}

void testqfsm3::onExit(QEvent *)
{
    anAck("Leave State 3");
}
