#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Rakentaja joka alustaa Rectangle ilman arvoja
    Rectangle();

    // Setterit
    void setWidth(double newWidth);
    void setHeight(double newHeight);

    // Getterit
    double getWidth() const;
    double getHeight() const;

    // Laskentametodit
    double getArea() const;
    double getCircum() const;

};



#endif // RECTANGLE_H
