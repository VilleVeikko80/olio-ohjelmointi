#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

// public Vehicle: Car-luokka perii Vehicle-luokan public -näkyvyydellä, mikä tarkoittaa,
// että public -ja protected -jäsenet Vehicle luokassa ovat suoraan käytettävissä Car -luokassa.

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const std:: string &name, int speed, int doors);

     // Ylikirjoitettu virtuaalifunktio, käytetään override avainsanaa, jotta on selvää, että printInfo korvaa
    // Vehicle-luokan virtuaalisen printInfo funktion
    void printInfo() const override;
};

#endif // CAR_H
