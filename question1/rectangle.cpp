// Rectangle.cpp :Implementation file for the Rectangle class
#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0), width(0) {}

// Destructor
Rectangle::~Rectangle() {}

// Setting the length of the rectangle
void Rectangle::setLength(float l) {
    length = l;
}

// Setting the width of the rectangle
void Rectangle::setWidth(float w) {
    width = w;
}

// Getting the length of the rectangle
float Rectangle::getLength() const {
    return length;
}

// Getting the width of the rectangle
float Rectangle::getWidth() const {
    return width;
}

// Calculating the area of the rectangle
float Rectangle::area() const {
    return length * width;
}
