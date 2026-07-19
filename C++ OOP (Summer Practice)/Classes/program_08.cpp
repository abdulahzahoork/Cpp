// Private members:

// - length
// - width
// - height

// Create a friend function

// calculateVolume(Box b)

// which can access private data.

#include <iostream>
using namespace std;

class Box {

private: 
    int length;
    int width;
    int height;

public: 
    Box(int len, int wid, int hei);

    ~Box();

    void setLength(int len);
    void setWidth(int wid);
    void setHeight(int hei);

    int getLength() const;
    int getWidth() const;
    int getHeight() const;

    friend void calculateVolume(const Box &b);
};

Box :: Box(int len, int wid, int hei) {
    if (len < 0) {
        cout << "Length cannot be negative! Setting to 0" << endl;
        length = 0;
    } else {
        length = len;
    }

    if (wid < 0) {
        cout << "Width cannot be negative! Setting to 0" << endl;
        width = 0;
    } else {
        width = wid;
    }

    if (hei < 0) {
        cout << "Height cannot be negative! Setting to 0" << endl;
        height = 0;
    } else {
        height = hei;
    }
}

Box :: ~Box() {}

void Box :: setLength(int len) {
    if (len < 0) {
        cout << "Length cannot be negative! Setting to 0" << endl;
        length = 0;
    } else {
        length = len;
    }
}

void Box :: setWidth (int wid) {
    if (wid < 0) { 
        cout << "Width cannot be negative! Setting to 0" << endl;
        width = 0;
    } else {
        width = wid;
    }
}

void Box :: setHeight (int hei) {
    if (hei < 0) {
        cout << "Height cannot be negative! Setting to 0" << endl;
        height = 0;
    } else {
        height = hei;
    }
}

int Box :: getLength() const {
    return length;
}

int Box :: getWidth() const {
    return width;
}

int Box :: getHeight() const {
    return height;
}

void calculateVolume(const Box &b) {
    cout << "Volume of Box: " << b.length * b.width * b.height << endl;
} 


int main() {
    int len, wid, hei;

    cout << "Enter length: ";
    cin >> len;

    cout << "Enter width: ";
    cin >> wid;

    cout << "Enter height: ";
    cin >> hei;

    Box b(len, wid, hei);

    calculateVolume(b);

    return 0;
}