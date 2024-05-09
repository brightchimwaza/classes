#include "Rectangle.h"

Rectangle::Rectangle() : length(0), width(0) {} // Initialize members to zero

Rectangle::Rectangle(float l, float w) : length(l), width(w) {} // Overloaded constructor

Rectangle::~Rectangle() {} // Destructor does nothing

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}
