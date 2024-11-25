#include "engine.h"
#include <iostream>
using namespace std;

Engine::Engine(int horsepower, const string &type) : horsepower(horsepower), type(type) {}


void Engine::showDetails() const {
    cout << "Engine: " << horsepower << "HP, " << type << endl;
}
