#include "vehicle.h"
#include <iostream>

using namespace std;

//Rakentaja
Vehicle::Vehicle(const std::string &name, int speed) : name(name), speed(speed) {}

// Virtuaalinen printInfo-funktio
void Vehicle::printInfo() const {
    std::cout << "Name: " << name  << ", speed: "<< speed << " km/h" << std::endl;
}
