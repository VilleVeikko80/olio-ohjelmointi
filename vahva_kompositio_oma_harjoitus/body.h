#ifndef BODY_H
#define BODY_H

#include <string>
using namespace std;


class Body {
private:
    string color;
    string type;

public:
    Body(const string &color, const string &type);
    void showDetails() const;
};


#endif // BODY_H
