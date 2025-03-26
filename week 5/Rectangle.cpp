#include "rectangle.h"


Rectangle::Rectangle(double len, double wid) : length(len), width(wid) {}


double Rectangle::getLength() const {
    return length;
}


double Rectangle::getWidth() const {
    return width;
}


void Rectangle::setLength(double len) {
    length = len;
}


void Rectangle::setWidth(double wid) {
    width = wid;
}


double Rectangle::getArea() const {
    return length * width;
}