// Problem 2: Rectangle

// Create a Rectangle class.

// Members:

// - Length
// - Width

// Functions:

// - setLength()
// - setWidth()
// - getArea()
// - getPerimeter()

// Create multiple objects and display their area.

// Concepts

// Class
// Object
// Member Functions
// Getter/Setter

#include <iostream>
using namespace std;

class Rectangle{

private: 
    int len;
    int width;

public: 
    Rectangle() {
        len = 0;
        width = 0;
    }

    void setLength(int l) {
        if (l < 0) {
            cout << "Length cannot be negative! Setting to 0." << endl;
            len = 0;
        } else {
            len = l;
        }
    }

    void setWidth(int w) {
        if (w < 0) {
            cout << "Width cannot be negative! Setting to 0." << endl;
            width = 0;
        } else {
            width = w;
        }
    }

    int getLength() const {
        return len;
    }

    int getWidth() const {
        return width;
    }

    int getArea() const {
        return len*width;
    }
    
    int getPerimeter() const {
        return (2 * (len + width));
    }
};

int main() {
    Rectangle r1, r2, r3;
    
    r1.setLength(3);
    r1.setWidth(2);

    r2.setLength(38);
    r2.setWidth(33);

    r3.setLength(17);
    r3.setWidth(58);

    cout << "Area of r1: " << r1.getArea() << endl;
    cout << "Area of r2: " << r2.getArea() << endl;
    cout << "Area of r3: " << r3.getArea() << endl;

    return 0;
}