#ifndef TESTQFSM1_H
#define TESTQFSM1_H

#include <QState>
#include "testqfsmdb.h"
#include <QTimer>

class testqfsm1 : public QState
{
public:
    testqfsm1();
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    testQFSMDB * dbPtr;
    QTimer timer;
};

#endif // TESTQFSM1_H
