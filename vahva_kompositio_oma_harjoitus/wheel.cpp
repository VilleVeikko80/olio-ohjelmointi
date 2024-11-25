#include "wheel.h"
#include <iostream>
using namespace std;

Wheel::Wheel(int size, const string &type) : size(size), type(type) {}


void Wheel::showDetails() const {
    cout << "Wheel: " << size << "inch, " << type << endl;

}
