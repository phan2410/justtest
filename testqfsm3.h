#ifndef TESTQFSM3_H
#define TESTQFSM3_H

#include <QState>
#include "testqfsmdb.h"

class testqfsm3 : public QState
{
public:
    testqfsm3();
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
};

#endif // TESTQFSM3_H
