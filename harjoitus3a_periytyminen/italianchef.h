#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include <string>

#include "chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string &name);
    ~ItalianChef();

    std::string getName() const; // Palauttaa kokin nimen
    void makePasta() const; // ItalianChef metodi

};

#endif // ITALIANCHEF_H
