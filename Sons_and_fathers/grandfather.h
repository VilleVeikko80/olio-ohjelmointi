#ifndef GRANDFATHER_H
#define GRANDFATHER_H

#include <string>
using namespace std;

class GrandFather {
private:
    string Grandname;

public:
    GrandFather();

    void setGrandName(string);
    string getGrandName();
};

#endif // GRANDFATHER_H
