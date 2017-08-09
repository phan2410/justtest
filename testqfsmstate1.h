#ifndef TESTQFSMSTATE1_H
#define TESTQFSMSTATE1_H

#include <QState>
#include <QTimer>
#include "testqfsmdb.h"

class testqfsmState1 : public QState
{
public:
    testqfsmState1();
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    bool is3SecPassed = false;
};

#endif // TESTQFSMSTATE1_H
