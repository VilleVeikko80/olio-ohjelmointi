#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Pinomuisti
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");

    car.setEngine();
    car.setWheels();

    car.printDetails();



    return 0;
}
