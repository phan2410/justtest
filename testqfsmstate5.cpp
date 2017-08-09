#include "testqfsmState5.h"

testqfsmState5::testqfsmState5(testQFSMDB *nowdatabase) : database(nowdatabase)
{
    timer.setParent(this);
    timer.setInterval(2000);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [&](){
        is3SecPassed = true;
        anInfo("Time Elapsed: " + QString::number(timer.interval()) + " ms");
    });
}

void testqfsmState5::onEntry(QEvent *)
{
    anAck("Enter State " + this->objectName());
    emit database->directTransitionRequest("TestState6");
    timer.start();
    while (!is3SecPassed)
    {
        qApp->processEvents();
    }
    anInfo("Freed")
}

void testqfsmState5::onExit(QEvent *)
{
    anAck("Leave State " + this->objectName());
    timer.stop();
}
