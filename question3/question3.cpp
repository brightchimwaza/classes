#include <iostream>
#include <cmath>



namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        // Default constructor
        Square() : sideLength(0) {}

        // Overloaded constructor
        Square(double side) : sideLength(side) {}

        // our Destructor
        ~Square() {}

        // Accessor method
        double getSideLength() const {
            return sideLength;
        }
    };

    class Triangle {
    private:
        double base,height;

    public:
        // Default constructor
        Triangle() : base(0), height(0) {}

        // Overloaded constructor
        Triangle(double b, double h) : base(b), height(h) {}

        // Destructor
        ~Triangle() {}

        // Accessor methods
        double getBase() const {
            return base;
        }

        double getHeight() const {
            return height;
        }
    };

    class Circle {
    private:
        double radius;

    public:
        // Default constructor
        Circle() : radius(0) {}

        // Overloaded constructor
        Circle(double r) : radius(r) {}

        // Destructor
        ~Circle() {}

        // Accessor method
        double getRadius() const {
            return radius;
        }
    };
}

class Area {
public:
    // Calculate the area of a square
    static double calculateArea(const shapes::Square& square) {
        double side = square.getSideLength();
        return side * side;
    }

    // Calculate the area of a triangle
    static double calculateArea(const shapes::Triangle& triangle) {
        double base = triangle.getBase();
        double height = triangle.getHeight();
        return 0.5 * base * height;
    }

    // Calculate the area of a circle
    static double calculateArea(const shapes::Circle& circle) {
        double radius = circle.getRadius();
        return M_PI * radius * radius;
    }
};
int main() {
    // Example usage
    shapes::Square square(5);
    shapes::Triangle triangle(4, 3);
    shapes::Circle circle(2.5);

    std::cout << "Area of square: " << Area::calculateArea(square) << std::endl;
    std::cout << "Area of triangle: " << Area::calculateArea(triangle) << std::endl;
    std::cout << "Area of circle: " << Area::calculateArea(circle) << std::endl;

    return 0;
}


