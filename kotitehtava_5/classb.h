#ifndef CLASSB_H
#define CLASSB_H

#include <string>
#include <iostream>

using namespace std;

class ClassB {
private:
    string info;


public:
    ClassB();
    ClassB(const string &title);


    // Getteri
    string getInfo() const;


    // Setteri
    void setInfo(const string &info);

};

#endif // CLASSB_H
