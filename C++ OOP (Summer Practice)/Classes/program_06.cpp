// Problem 9: Calculator

// Create overloaded functions named add().

// Versions:

// add(int, int)

// add(double, double)

// add(int, int, int)

// Test all of them.

#include <iostream>
using namespace std;

class Calculator{
public: 
    int add(int a, int b) {
        return (a + b);
    }

    double add(double a, double b) {
        return (a+b);
    }

    int add(int a, int b, int c) {
        return a+b+c;
    }
};

int main() {
    Calculator c1;

    cout << c1.add(1, 1) << endl;
    cout << c1.add(1, 1, 1) << endl;
    cout << c1.add(2.3, 1.7) << endl;

    return 0;
}