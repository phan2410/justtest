#include "testqfsmstate2.h"

testqfsmState2::testqfsmState2()
{
    timer.setParent(this);
    timer.setInterval(3000);
    timer.setSingleShot(true);
    QObject::connect(&timer, &QTimer::timeout, this, [&](){is3SecPassed = true; anInfo("Time Elapsed: " + QString::number(timer.interval()) + " ms");});
}

void testqfsmState2::onEntry(QEvent *)
{
    anAck("Enter State " + this->objectName());
    timer.start();
    while (!is3SecPassed)
    {
        qApp->processEvents();
    }
    anInfo("Freed")
}

void testqfsmState2::onExit(QEvent *)
{
    anAck("Leave State " + this->objectName());
    timer.stop();
}
