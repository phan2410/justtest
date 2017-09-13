#ifndef TESTQFSM_H
#define TESTQFSM_H

#include <QObject>
#include <QStateMachine>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "testqfsmdb.h"
#include "directtransition.h"
#include "testqfsm1.h"
#include "testqfsm2.h"
#include "testqfsm3.h"
#include "testqfsm4.h"

class testQFSM : public QStateMachine
{
    Q_OBJECT
public:
    explicit testQFSM(QObject *parent = 0);
    void testInsideThread();
signals:
    void signalSpontaneous();
public slots:
    void In();
private:
    testQFSMDB * currentDb = Q_NULLPTR;
    QSqlDatabase localDb;
};

#endif // TESTQFSM_H
