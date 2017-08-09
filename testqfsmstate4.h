#ifndef testqfsmState4_H
#define testqfsmState4_H

#include <QState>
#include <QTimer>
#include "testqfsmdb.h"

class testqfsmState4 : public QState
{
public:
    testqfsmState4(testQFSMDB *nowdatabase);
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    bool is3SecPassed = false;
    testQFSMDB * database;
};

#endif // testqfsmState4_H
