#include <iostream>
#include <memory>
#include <string>
#include "animal.h"


using namespace std;

// Rakentaja
Animal::Animal() {}



// virtuaalinen callOut-funktio
void Animal::callOut() const {
    std::cout << "Elain aantelee." << std::endl;
}

