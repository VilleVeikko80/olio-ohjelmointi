#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel(int size, const string &type);
    void showDetails() const;
};


#endif // WHEEL_H
