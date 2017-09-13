#include "testqfsm.h"

testQFSM::testQFSM(QObject *parent): QStateMachine(parent)
{
    anWarn("Construct Test QStateMachine !");
    currentDb = new testQFSMDB();

    testqfsm1 *state1 = new testqfsm1(currentDb,7000);
    testqfsm2 *state2 = new testqfsm2(currentDb,7000);
    state2->setObjectName("state2");
    testqfsm3 *state3 = new testqfsm3();
    testqfsm4 *state4 = new testqfsm4();

    state1->addTransition(new directTransition(currentDb,state2));
    state2->addTransition(currentDb,&testQFSMDB::signalA,state4);
    state2->addTransition(currentDb,&testQFSMDB::signalB,state3);
    state4->addTransition(currentDb,&testQFSMDB::signalB,state3);

    this->addState(state1);
    this->addState(state2);
    this->addState(state3);
    this->addState(state4);

    this->setInitialState(state1);

    //    QObject::connect(this, &testQFSM::started, currentDb, &testQFSMDB::startTimerEmitSignalA);
}

void testQFSM::testInsideThread()
{
    anAck("this is from state machine");    
    localDb = QSqlDatabase::database();
    anError("current Connection : " << localDb.connectionName());
    QSqlQuery tmpQuery;
    tmpQuery.exec("SELECT * FROM stations");
    tmpQuery.next();
    anWarn("test Query: " << tmpQuery.value("GlobalID").toString());
    QString connection = localDb.connectionName();
    localDb.close();
    localDb = QSqlDatabase();
    localDb.removeDatabase(connection);
    anError("After remove Connection : " << localDb.connectionName());

    emit signalSpontaneous();
}

void testQFSM::In()
{

}
