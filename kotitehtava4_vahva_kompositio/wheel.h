#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    // Oletusrakentaja
    Wheel();

    // Parametrillinen rakentaja
    Wheel(int size, const string &type);


    // Getterit
    int getSize() const;
    string getType() const;

    // Setterit
    void setSize(int newSize);
    void setType(const string &type);


};

#endif // WHEEL_H
