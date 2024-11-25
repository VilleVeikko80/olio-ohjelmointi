#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <string>

using namespace std;

class Engine {
private:
    int horsepower;
    double displacement;


public:
    Engine();
    Engine(int horsepower, double displacement);


    // setterit
    void setHorsepower(int newHorsepower);
    void setDisplacement(double newDisplacement);

    // getterit
    int getHorsepower() const;
    double getDisplacement() const;



};

#endif // ENGINE_H
