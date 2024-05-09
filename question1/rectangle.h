// Rectangle.h : Header file for the Rectangle class
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();  // Default constructor
    ~Rectangle(); // Destructor

    void setLength(float l); // Method to set the length
    void setWidth(float w);  // Method to set the width
    
    float getLength() const; // Method to get the length
    float getWidth() const;  // Method to get the width
    
    float area() const;      // Method to calculate the area
};

#endif
