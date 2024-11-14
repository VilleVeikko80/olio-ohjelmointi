#ifndef BICYCLE_H
#define BICYCLE_H

#include "vehicle.h"
#include <iostream>

using namespace std;

class Bicycle : public Vehicle {
private:
    int gearCount;

public:
    Bicycle(const std::string &name, int speed, int gearCount);

    void printInfo() const override;
};

#endif // BICYCLE_H
