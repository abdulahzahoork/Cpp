// Problem 2: Shape Class (Real OOP Design)

// Create a class Shape:

// Overload area() function:
// area(int side) → square
// area(int length, int width) → rectangle
// area(double radius) → circle
// Extra:
// Use constant value of π = 3.14
// Print results properly

#include <iostream>
#include <cmath>
using namespace std;

class Shape {

public: 
    int area(int side) {
        return pow(side, 2);
    }

    int area(int len, int wid) {
        return len*wid;
    }

    double area(double radius) {
        return 3.14*(pow(radius, 2));
    }
};

int main() {
    Shape square, rectangle, circle;

    cout << "Area of Square: " << square.area(4) << endl;
    cout << "Area of Rectangle: " << rectangle.area(2, 5) << endl;
    cout << "Area of circle: " << circle.area(2.5) << endl;

    return 0;
}