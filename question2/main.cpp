#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rect;
    float l, w;

    cout << "Enter the length of the first rectangle: ";
    cin >> l;
    rect.setLength(l);

    cout << "Enter the width of the first rectangle: ";
    cin >> w;
    rect.setWidth(w);

    cout << "The area of the first rectangle is: " << rect.calculateArea() << endl;

    // New code for the second rectangle
    cout << "Enter the length of the second rectangle: ";
    cin >> l;

    cout << "Enter the width of the second rectangle: ";
    cin >> w;

    Rectangle rect2(l, w); // Using the overloaded constructor

    cout << "The area of the second rectangle is: " << rect2.calculateArea() << endl;

    return 0;
}
