#include "testqfsmstate3.h"

testqfsmState3::testqfsmState3()
{
    timer.setParent(this);
    timer.setInterval(4000);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [&](){is3SecPassed = true; anInfo("Time Elapsed: " + QString::number(timer.interval()) + " ms");});
}

void testqfsmState3::onEntry(QEvent *)
{
    anAck("Enter State " + this->objectName());
    timer.start();
    while (!is3SecPassed)
    {
        qApp->processEvents();
    }
    anInfo("Freed")
}

void testqfsmState3::onExit(QEvent *)
{
    anAck("Leave State " + this->objectName());
    timer.stop();
}
