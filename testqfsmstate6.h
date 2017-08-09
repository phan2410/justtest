#ifndef testqfsmState6_H
#define testqfsmState6_H

#include <QState>
#include <QTimer>
#include "testqfsmdb.h"

class testqfsmState6 : public QState
{
public:
    testqfsmState6();
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    bool is3SecPassed = false;
};

#endif // testqfsmState6_H
