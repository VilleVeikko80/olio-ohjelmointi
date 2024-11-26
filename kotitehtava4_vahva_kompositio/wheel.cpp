#include "wheel.h"
#include "wheel.h"
#include <iostream>
#include <string>

using namespace std;

// Oletusrakentaja
Wheel::Wheel() : size(0), type("undefined") {}

// Parametrillinen rakentaja
Wheel::Wheel(int size, const string &type) : size(size), type(type) {}



// Setterit
void Wheel::setSize(int newSize)
{
    size = newSize;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}


// Getterit


int Wheel::getSize() const
{
    return size;
}

string Wheel::getType() const
{
    return type;
}


