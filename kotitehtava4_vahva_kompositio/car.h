#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

#include <string>
using namespace std;

class Car {
private:

    Engine engine;
    Wheel wheel1;
    Wheel wheel2;
    Wheel wheel3;
    Wheel wheel4;

    string model;
    string brand;

public:

    // Oletusrakentaja
    Car();

    // Parametrillinen rakentaja
    Car(const Engine &engine, const Wheel &wheel1, const Wheel &wheel2, const Wheel &wheel3, const Wheel &wheel4, const string &model, const string &brand);

    // Setterit

    void setEngine();
    void setWheels();

    void setBrand(const string &newBrand);
    void setModel(const string &newModel);

    //Getterit

    string getBrand() const;
    string getModel() const;



    // Tulostus metodi
    void printDetails() const;


};

#endif // CAR_H
