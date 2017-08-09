#include "testqfsm.h"

testQFSM::testQFSM(QObject *parent): QStateMachine(parent)
{
    anWarn("Construct Test QStateMachine !");
    currentDb = new testQFSMDB();
    testqfsmState1 *state1 = new testqfsmState1();
    state1->setObjectName(QStringLiteral("TestState1"));
    testqfsmState2 *state2 = new testqfsmState2();
    state2->setObjectName(QStringLiteral("TestState2"));
    testqfsmState3 *state3 = new testqfsmState3();
    state3->setObjectName(QStringLiteral("TestState3"));
    testqfsmState4 *state4 = new testqfsmState4(currentDb);
    state4->setObjectName(QStringLiteral("TestState4"));
    testqfsmState5 *state5 = new testqfsmState5(currentDb);
    state5->setObjectName(QStringLiteral("TestState5"));
    testqfsmState6 *state6 = new testqfsmState6();
    state6->setObjectName(QStringLiteral("TestState6"));

    state1->addTransition(currentDb, &testQFSMDB::outerTestSignal,state2);
    state2->addTransition(currentDb, &testQFSMDB::outerTestSignal,state3);
    state3->addTransition(currentDb, &testQFSMDB::outerTestSignal,state4);
    state4->addTransition(new directTransition(currentDb,state5));
    state5->addTransition(currentDb, &testQFSMDB::outerTestSignal,state6);
    state6->addTransition(currentDb, &testQFSMDB::outerTestSignal,state1);

    this->addState(state1);
    this->addState(state2);
    this->addState(state3);
    this->addState(state4);
    this->addState(state5);
    this->addState(state6);
    this->setInitialState(state1);
}

void testQFSM::In()
{
    emit currentDb->outerTestSignal();
}
