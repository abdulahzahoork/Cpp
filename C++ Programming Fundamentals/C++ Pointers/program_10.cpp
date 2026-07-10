// Write a function that returns both quotient and remainder using pointer parameters.

#include <iostream>
using namespace std;

bool divide (int *a, int *b, int *q, int *r) {
    if (*b != 0) {
        *q = *a / *b;
        *r = *a % *b;
        return true;
    } else {
        return false;
    }
}

int main() {
    int num = 45;
    int div = 3;
    int q = 0;
    int r = 0;

    if (divide(&num, &div, &q, &r)) {
        cout << "Quotient: " << q << "\nRemainder: " << r << endl;
    } else {
        cout << "Math Error! Division by zero." << endl;
    }

    return 0;
}