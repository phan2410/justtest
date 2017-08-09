#include <QCoreApplication>
#include "test.h"
#include "testqfsm.h"
#include <QThread>
#include <Qtimer>
#include "anlogger.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTimer timerMain;
    timerMain.setInterval(2000);
    timerMain.setSingleShot(true);
    QThread * thread2 = new QThread();
    testQFSM * testStateMachine = new testQFSM();

    test * testMethod = new test();
    testStateMachine->moveToThread(thread2);
    QObject::connect(thread2, &QThread::started, testStateMachine, &testQFSM::start);
    QObject::connect(testMethod, &test::emitTestSignal, testStateMachine, &testQFSM::In);
    QObject::connect(&timerMain, &QTimer::timeout,[&](){
        anWarn("Emit Test Signal !");
        emit testMethod->emitTestSignal();
        emit testMethod->emitTestSignal();
        emit testMethod->emitTestSignal();
        emit testMethod->emitTestSignal();
        emit testMethod->emitTestSignal();
        emit testMethod->emitTestSignal();
        emit testMethod->emitTestSignal();
    });
    thread2->start();
    timerMain.start();


    return a.exec();
}
