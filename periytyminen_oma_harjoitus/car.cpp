#include "car.h"
#include <iostream>

using namespace std;

// Rakentaja
Car::Car(const std:: string &name, int speed, int doors) : Vehicle(name, speed), doors(doors) {}

// Ylikirjoiteetu printInfo-funktio
void Car::printInfo() const {
    Vehicle::printInfo(); // Kutsutaan perusluokan printInfo-funktiota
    std::cout << "Doors: " << doors << std::endl;
}

