#include "directtransition.h"

directTransition::directTransition(testQFSMDB  *database, QAbstractState *destinationState) :
    QSignalTransition(database, &testQFSMDB::directTransitionRequest), dbPtr(database)
{
    this->setTargetState(destinationState);
}

bool directTransition::eventTest(QEvent *e)
{
    if (!(QSignalTransition::eventTest(e) && this->targetState()))
        return false;
    QStateMachine::SignalEvent * se = static_cast<QStateMachine::SignalEvent *>(e);
    return (se->arguments().at(0).toString() == this->targetState()->objectName());
}

void directTransition::onTransition(QEvent *)
{
    emit dbPtr->emitSignalA();
}

