// Swap two numbers using pointers.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int *x = &a;
    int *y = &b;

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}