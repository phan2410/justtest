#ifndef TESTQFSMDB_H
#define TESTQFSMDB_H

#include <QObject>
#include "anlogger.h"
#include <QTimer>
#include <QCoreApplication>

class testQFSMDB : public QObject
{
    Q_OBJECT
public:
    explicit testQFSMDB(QObject *parent = nullptr);

signals:
    void directTransitionRequest(const QString &);
    void outerTestSignal();

    void signalInit();
    void signalA();
    void signalB();
public slots:
    void startTimerEmitSignalA();
    void emitSignalA();
private:
    QTimer invoker;
};

#endif // TESTQFSMDB_H
