#include "classb.h"


// Oletusrakentaja
ClassB::ClassB() : info("") {}

// Parametrillinen rakentaja
ClassB::ClassB(const string &info) : info(info) {}


// Getteri
string ClassB::getInfo() const
{
    return info;
}


// Setteri
void ClassB::setInfo(const string &newInfo)
{
    info = newInfo;
}





