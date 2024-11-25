#ifndef ENGINE_H
#define ENGINE_H

#include <string>
using namespace  std;


class Engine {
private:
    int horsepower;
    string type;

public:
    Engine(int horsepower, const string &type);
    void showDetails() const;
};



#endif // ENGINE_H

