#include "testqfsm.h"

testQFSM::testQFSM(QObject *parent): QStateMachine(parent)
{
    anWarn("Construct Test QStateMachine !");
    currentDb = new testQFSMDB();

}

void testQFSM::In()
{

}
