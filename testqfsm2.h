#ifndef TESTQFSM2_H
#define TESTQFSM2_H

#include <QState>
#include "testqfsmdb.h"

class testqfsm2 : public QState
{
public:
    testqfsm2(testQFSMDB *database);
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    testQFSMDB * dbPtr;
};

#endif // TESTQFSM2_H
