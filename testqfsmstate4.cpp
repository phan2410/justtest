#include "testqfsmState4.h"

testqfsmState4::testqfsmState4(testQFSMDB *nowdatabase): database(nowdatabase)
{
    timer.setParent(this);
    timer.setInterval(2000);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [&](){
        is3SecPassed = true;
        anInfo("Time Elapsed: " + QString::number(timer.interval()) + " ms");
    });
}

void testqfsmState4::onEntry(QEvent *)
{
    anAck("Enter State " + this->objectName());
    emit database->directTransitionRequest("TestState5");
    emit database->outerTestSignal();
    emit database->outerTestSignal();
    timer.start();
    while (!is3SecPassed)
    {
        qApp->processEvents();
    }
    anInfo("Freed")
}

void testqfsmState4::onExit(QEvent *)
{
    anAck("Leave State " + this->objectName());
    timer.stop();
}
