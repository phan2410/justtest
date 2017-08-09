#ifndef TESTSIGNAL_H
#define TESTSIGNAL_H

#include <QSignalTransition>
#include <QAbstractState>
#include <QStateMachine>
#include "testqfsmdb.h"

class testSignal : public QSignalTransition
{
public:
    testSignal(testQFSMDB * database,QAbstractState * destinationState);
protected:
    void onTransition(QEvent *) override;
};

#endif // TESTSIGNAL_H
