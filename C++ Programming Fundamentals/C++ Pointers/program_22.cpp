// Swap two integers using pointers.

#include <iostream>
using namespace std;

void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int a = 10, b = 5;
    cout << "Before swapping: \nA: " << a << "\nB: " << b << endl;
    swap(&a, &b);
    cout << "After swapping: \nA: " << a << "\nB: " << b << endl;
    return 0;
}