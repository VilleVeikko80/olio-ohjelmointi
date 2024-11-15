#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{

    // Luodaan Animal ja Dog-oliot pinomuistiin
    Animal animal;
    Dog dog;

    // Kutsutaan callOut-funktiota
    animal.callOut();
    dog.callOut();


    // Molemmat oliot tuhoutuvat, kun main-funktio päättyy


    return 0;
}
