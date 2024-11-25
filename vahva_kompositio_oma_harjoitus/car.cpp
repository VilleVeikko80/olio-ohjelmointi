#include "car.h"
#include <iostream>
using namespace std;



Car::Car(const Engine &engine, const Body &body, const Wheel &wheel)
    : engine(engine), body(body) {
    for (int i = 0; i < 4; i++) {
        wheels.push_back(wheel); // Lisätään 4 samanlaista pyörää
    }
}




void Car::showDetails() const {
    cout << "Car details: " << endl;
    engine.showDetails();
    body.showDetails();
    for (const auto &wheel : wheels) {
        wheel.showDetails();
    }
}
