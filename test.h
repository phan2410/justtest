#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QThread>
#include <QDebug>
#include "testqfsm.h"

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);
    enum Notification
    {
        NoNotification = 0,
        SerialPortDisconnect,
        SerialPortConnect,
        SerialPortRestart,
        PendingMessageListClear
    };
    Q_ENUM(Notification)
    void init();
signals:
    void emitTestSignal(QString = NULL);
    void signal1();
public slots:
    void selfReceive(QString data = NULL);
    void slotA();
    void slotB();
    void repRandomSignal();
private:
    QThread * testInsideThread;
    testQFSM * testStateMachine;
    QSqlDatabase localDb;
};

#endif // TEST_H
