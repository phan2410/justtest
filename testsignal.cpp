#include "testsignal.h"

testSignal::testSignal(testQFSMDB *database, QAbstractState * destinationState):
    QSignalTransition(database, &testQFSMDB::outerTestSignal)
{
    this->setTargetState(destinationState);
}

void testSignal::onTransition(QEvent *)
{

}
