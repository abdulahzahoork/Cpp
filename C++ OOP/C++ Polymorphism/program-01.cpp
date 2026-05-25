// Problem 1: Calculator Class (Foundation)

// Create a class Calculator with overloaded functions:

// Requirements:
// add(int, int)
// add(double, double)
// add(int, int, int)
// multiply(int, int)
// multiply(double, double)

// Task:
// Create object in main()
// Call all overloaded functions

#include <iostream>
using namespace std;

class Calculator {

public: 
    int add (int a, int b) {
        return a+b;
    }

    double add (double a, double b) {
        return a+b;
    }

    int add (int a, int b, int c) {
        return a+b+c;
    }

    int multiply (int a, int b) {
        return a*b;
    }

    double multiply (double a, double b) {
        return a*b;
    }
};

int main() {
    Calculator c;

    int a, b, d;
    double e, f;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> d;

    cout << "Enter 2 doubles: ";
    cin >> e >> f;

    cout << "First Function's output: " << c.add(a, b) << endl;
    cout << "Second Function's output: " << c.add(e, f) << endl;
    cout << "Third Function's output: " << c.add(a, b, d) << endl;
    cout << "Fourth Function's output: " << c.multiply(a, b) << endl;
    cout << "Fifth Function's output: " << c.multiply(e, f) << endl;

    return 0;
}