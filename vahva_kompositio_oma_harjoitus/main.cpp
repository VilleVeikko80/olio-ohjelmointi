#include "car.h"
#include "engine.h"
#include "wheel.h"
#include "body.h"
#include <iostream>
using namespace std;



int main() {

    // Luodaan moottori, kori, ja pyörä
    Engine engine(150, "Bensa");
    Body body("Punainen", "Sedan");
    Wheel wheel(17, "Summer");

    // Luodaan auto ja näytetään sen tiedot
    Car car(engine, body, wheel);
    car.showDetails();




    return 0;
}
