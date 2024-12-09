#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent) : QObject(parent) {

    qDebug()<<"Start";
    QObject::connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));
    qDebug()<<"end";
}



void ExampleClass::startToWait() {
    QThread::msleep(2000);
    emit readyToSay();

}

void ExampleClass::sayHelloSlot() {
    qDebug()<<"Terve kaveri!!";
}

