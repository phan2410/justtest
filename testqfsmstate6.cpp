#include "testqfsmState6.h"

testqfsmState6::testqfsmState6()
{
    timer.setParent(this);
    timer.setInterval(2000);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [&](){is3SecPassed = true; anInfo("Time Elapsed: " + QString::number(timer.interval()) + " ms");});
}

void testqfsmState6::onEntry(QEvent *)
{
    anAck("Enter State " + this->objectName());
    timer.start();
    while (!is3SecPassed)
    {
        qApp->processEvents();
    }
    anInfo("Freed")
}

void testqfsmState6::onExit(QEvent *)
{
    anAck("Leave State " + this->objectName());
    timer.stop();
}
