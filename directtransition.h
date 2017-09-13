#ifndef DIRECTTRANSITION_H
#define DIRECTTRANSITION_H

#include <QSignalTransition>
#include <QAbstractState>
#include <QStateMachine>
#include "testqfsmdb.h"

class directTransition : public QSignalTransition
{
public:
    directTransition(testQFSMDB * database, QAbstractState * destinationState);
protected:
    bool eventTest(QEvent *e) override;
    void onTransition(QEvent *) override;
private:
    testQFSMDB * dbPtr;
};

#endif // DIRECTTRANSITION_H
