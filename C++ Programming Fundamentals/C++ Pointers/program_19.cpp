// Swap 2 numbers using pointers and function

#include <iostream>
using namespace std;

void swapFunc(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cout << "--- ENTER ---" << endl;
    cout << "Value of A: ";
    cin >> a;
    cout << "Value of B: ";
    cin >> b;

    int *p = &a;
    int *q = &b;

    swapFunc(p, q);

    cout << "\n--- AFTER SWAPPING ---" << endl;
    cout << "Value of A: " << a << endl;
    cout << "Value of B: " << b << endl;

    return 0;
}
