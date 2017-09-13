#ifndef TESTQFSM2_H
#define TESTQFSM2_H

#include <QState>
#include <QTimer>
#include "testqfsmdb.h"

class testqfsm2 : public QState
{
public:
    testqfsm2(testQFSMDB *database, quint16 delayTransInMSecs);
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    testQFSMDB * dbPtr;
};

#endif // TESTQFSM2_H
