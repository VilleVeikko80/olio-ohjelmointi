#ifndef FATHER_H
#define FATHER_H
#include "grandfather.h"

class Father : public GrandFather{
private:
    string Fathername;

public:
    Father();

    void setFatherName(string);
    string getFatherName();
};

#endif // FATHER_H
