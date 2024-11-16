#ifndef SON_H
#define SON_H

#include "father.h"

class Son : public Father {
private:
    string name;

public:
    Son(const string &name);

    void setName(string);
    string getName();

};

#endif // SON_H
