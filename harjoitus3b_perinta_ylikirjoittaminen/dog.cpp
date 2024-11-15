#include "dog.h"
#include <iostream>

using namespace std;

Dog::Dog() {}


// Ylikirjoitettu virtuaalifunktio
void Dog::callOut() const {
    std::cout << "Koira haukkuu!" << std::endl;
}
