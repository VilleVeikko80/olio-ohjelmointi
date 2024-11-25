#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
#include "body.h"
#include <vector>  // Tarvitaan pyörien tallennukseen

class Car {
private:
    Engine engine;                          // Moottori
    Body body;                               // Kori
    vector<Wheel> wheels;           // lista pyöristä (4 kappaletta)

public:
    Car(const Engine &engine, const Body &body, const Wheel &wheel); // rakentaja
    void showDetails() const;
};


#endif // CAR_H
