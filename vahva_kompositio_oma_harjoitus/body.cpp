#include "body.h"
#include <iostream>
using namespace std;


Body::Body(const string &color, const string &type) : color(color), type(type) {}


void Body::showDetails() const {
    cout << "Body: " << color << ", " << type << endl;

}
