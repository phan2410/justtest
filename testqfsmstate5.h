#ifndef testqfsmState5_H
#define testqfsmState5_H

#include <QState>
#include <QTimer>
#include "testqfsmdb.h"

class testqfsmState5 : public QState
{
public:
    testqfsmState5(testQFSMDB *nowdatabase);
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    bool is3SecPassed = false;
    testQFSMDB * database;
};

#endif // testqfsmState5_H
