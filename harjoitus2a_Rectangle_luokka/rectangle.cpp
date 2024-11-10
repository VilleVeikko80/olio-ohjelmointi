#include "rectangle.h"

// Rakentajan määrittely
Rectangle::Rectangle() {

    // Alustetaan oletusarvot tarvittaessa

}


// Setterit
void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

// Getterit

double Rectangle::getHeight() const
{
    return height;
}


double Rectangle::getWidth() const
{
    return width;
}

// Laskentametodit
double Rectangle::getArea() const { // Suorakulmion pinta-ala
    return width * height;
}

double Rectangle::getCircum() const { // Suorakulmion ympärysmitta
    return 2 * (width + height);
}



