#ifndef TESTQFSM4_H
#define TESTQFSM4_H

#include <QState>
#include "testqfsmdb.h"

class testqfsm4 : public QState
{
public:
    testqfsm4();
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
};

#endif // TESTQFSM4_H
