#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rect;
    float len, wid;

    // Asking the user for the length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    rect.setLength(len);

    cout << "Enter the width of the rectangle: ";
    cin >> wid;
    rect.setWidth(wid);

    // Displaying the area of the rectangle
    cout << "The area of the rectangle is: " << rect.area() << endl;

    return 0;
}
