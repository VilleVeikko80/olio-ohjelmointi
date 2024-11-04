#include "funktiot.h"
#include <iostream>
#include <iomanip>

void calcSum(int a, int b) {
    int summa = a + b;
    std::cout << "Luvun " << a << " ja luvun " << b << " summa on: " << summa << std::endl;
}

void calcDiv(int a, int b) {
    if(b == 0) {
        std::cerr << "Virhe!! jakaminen nollalla ei onnistu. " << std::endl;
        return;
    }
    float osamaara = static_cast<float>(a) / b;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Luvun " << a << " ja luvun " << b << " osamaara on: " << osamaara << std::endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if(b == 0) {
       std::cerr << "Virhe!! jakaminen nollalla ei onnistu. " << std::endl;
        return 0.0f;
    }
    return static_cast<float>(a) / b;
}
