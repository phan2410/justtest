#include <QCoreApplication>
#include "test.h"
#include "testqfsm.h"
#include <QThread>
#include <Qtimer>
#include "anlogger.h"
#include <QtSerialPort/QSerialPort>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QTimer timerMain;
//    timerMain.setInterval(2000);
//    timerMain.setSingleShot(true);
//    QThread * thread2 = new QThread();
//    testQFSM * testStateMachine = new testQFSM();

//    test * testMethod = new test();
//    testStateMachine->moveToThread(thread2);
//    QObject::connect(thread2, &QThread::started, testStateMachine, &testQFSM::start);
//    QObject::connect(testMethod, &test::emitTestSignal, testStateMachine, &testQFSM::In);
//    QObject::connect(&timerMain, &QTimer::timeout,[&](){
//        anWarn("Emit Test Signal !");
//        emit testMethod->emitTestSignal();
//        emit testMethod->emitTestSignal();
//        emit testMethod->emitTestSignal();
//        emit testMethod->emitTestSignal();
//        emit testMethod->emitTestSignal();
//        emit testMethod->emitTestSignal();
//        emit testMethod->emitTestSignal();
//    });
//    thread2->start();
//    timerMain.start();

//    test testObj;
//    QObject::connect(&testObj, &test::emitTestSignal, &testObj, &test::selfReceive);
//    emit testObj.emitTestSignal();
//    emit testObj.emitTestSignal("test success");

//    QSerialPort * SerialPort = new QSerialPort();
//    SerialPort->setReadBufferSize(64);
//    SerialPort->setDataBits(QSerialPort::Data8);
//    SerialPort->setBaudRate(QSerialPort::Baud9600);
//    SerialPort->setStopBits(QSerialPort::OneStop);
//    SerialPort->setParity(QSerialPort::NoParity);
//    SerialPort->setFlowControl(QSerialPort::NoFlowControl);
//    SerialPort->setPortName("COM4");
//    QObject::connect(SerialPort, &QSerialPort::errorOccurred, [&](QSerialPort::SerialPortError errorCode){
//        qDebug() << "errorCode : " << tmpStr;
//    });
//    if (SerialPort->open(QIODevice::ReadWrite))
//    {
//        qDebug() << "SUCCESS";
//    }
//    else
//    {
//        qDebug() << "FAIL";
//    }

//    test::Notification notificationCode = test::Notification::SerialPortDisconnect;
//    anAck(notificationCode);
//    anAck("errorCode: " << notificationCode);

//    typedef QPair<QByteArray,QString> CommandMessage;

//    CommandMessage testCMsg;
//    testCMsg.first = QByteArray("this is qbytearray");
//    testCMsg.second = "this is key";

//    CommandMessage testCMsg2;
//    testCMsg2.first = QByteArray("qybetarray 2");
//    testCMsg2.second = "key 2";

//    CommandMessage testObj2;
//    testObj2 = testCMsg;
//    qDebug() << testObj2.first.toHex() << "--" << testObj2.second;
//    qDebug() << "--=====-";
//    testObj2 = testCMsg2;
//    qDebug() << testObj2.first.toHex() << "--" << testObj2.second;



    return a.exec();
}
