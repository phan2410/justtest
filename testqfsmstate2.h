#ifndef TESTQFSMSTATE2_H
#define TESTQFSMSTATE2_H

#include <QState>
#include <QTimer>
#include "testqfsmdb.h"

class testqfsmState2 : public QState
{
public:
    testqfsmState2();
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    bool is3SecPassed = false;
};

#endif // TESTQFSMSTATE2_H
