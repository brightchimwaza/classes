#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    Rectangle(float l, float w); // Overloaded constructor
    ~Rectangle(); // Destructor

    void setLength(float l); // Setter for length
    void setWidth(float w); // Setter for width
    
    float getLength() const; // Getter for length
    float getWidth() const; // Getter for width

    float calculateArea() const; // Method for calculate area
};

#endif
