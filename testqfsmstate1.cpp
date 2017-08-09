#include "testqfsmstate1.h"

testqfsmState1::testqfsmState1()
{
    timer.setParent(this);
    timer.setInterval(2000);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [&](){is3SecPassed = true; anInfo("Time Elapsed: " + QString::number(timer.interval()) + " ms");});
}

void testqfsmState1::onEntry(QEvent *)
{
    anAck("Enter State " + this->objectName());
    timer.start();
    while (!is3SecPassed)
    {
        qApp->processEvents();
    }
    anInfo("Freed")
}

void testqfsmState1::onExit(QEvent *)
{
    anAck("Leave State " + this->objectName());
    timer.stop();
}
