#include "bicycle.h"
#include <iostream>

using namespace std;

// Rakentaja
Bicycle::Bicycle(const std::string &name, int speed, int gearCount)
    : Vehicle(name, speed), gearCount(gearCount) {}

// Ylikirjoitettu printInfo-funktio
void Bicycle::printInfo() const {
    Vehicle::printInfo(); // Kutsutaan perusluokan printInfo-funktiota
    std::cout << "Gear count: " << gearCount << std::endl;
}
