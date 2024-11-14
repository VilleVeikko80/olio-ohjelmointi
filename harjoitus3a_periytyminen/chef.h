#ifndef CHEF_H
#define CHEF_H

#include <string>

using namespace std;

class Chef {
protected:
    std::string name;

public:
    Chef(const std::string &name); // Parametrillinen rakentaja
    ~Chef(); // Destruktori

    void makeSalad() const;
    void makeSoup() const;

};

#endif // CHEF_H
