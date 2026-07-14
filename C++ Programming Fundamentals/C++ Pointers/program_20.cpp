// Find maximum of two numbers using pointers.

#include <iostream>
using namespace std;

int maximum(int *a, int *b) {
    return (*a > *b)? *a : *b;
}

int main() {
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    int *p = &a;
    int *q = &b;

    if (*p == *q) {
        cout << "Both are equal." << endl;
        return 0;
    }

    cout << maximum(p, q) << " is greater." << endl;
    return 0;
}