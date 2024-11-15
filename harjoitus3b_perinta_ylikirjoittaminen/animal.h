#ifndef ANIMAL_H
#define ANIMAL_H
#include <memory>
#include <string>

class Animal {
public:
    Animal();

    // Virtuaalinen funktio
    virtual void callOut() const;
};

#endif // ANIMAL_H
