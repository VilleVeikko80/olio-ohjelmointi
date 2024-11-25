#include "engine.h"
#include <iostream>
#include <string>

using namespace std;

//Oletusrakentaja
Engine::Engine() : horsepower(0), displacement(0.0) {}

// Parametrillinen rakentaja
Engine::Engine(int horsepower, double displacement) : horsepower(horsepower), displacement(displacement) {}


// Setterit
void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

void Engine::setDisplacement(double newDisplacement) {
    displacement = newDisplacement;
}


// Getterit


int Engine::getHorsepower() const
{
    return horsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}
