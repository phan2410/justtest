#ifndef TESTQFSMSTATE3_H
#define TESTQFSMSTATE3_H

#include <QState>
#include <QTimer>
#include "testqfsmdb.h"

class testqfsmState3 : public QState
{
public:
    testqfsmState3();
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    bool is3SecPassed = false;
};

#endif // TESTQFSMSTATE3_H
