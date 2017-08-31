#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

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
signals:
    void emitTestSignal(QString = NULL);
public slots:
    void selfReceive(QString data = NULL);
};

#endif // TEST_H
