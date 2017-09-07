#ifndef TESTQFSM_H
#define TESTQFSM_H

#include <QObject>
#include <QStateMachine>
#include "testqfsmdb.h"
#include "directtransition.h"


class testQFSM : public QStateMachine
{
    Q_OBJECT
public:
    explicit testQFSM(QObject *parent = 0);
public slots:
    void In();
private:
    testQFSMDB * currentDb = Q_NULLPTR;
};

#endif // TESTQFSM_H
