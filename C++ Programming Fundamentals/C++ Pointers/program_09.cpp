// Write a function that finds the larger of two numbers using pointers.

#include <iostream>
using namespace std;

void findGreater(int *i, int *j) {
    if (*i > *j) {
        cout << *i << " is greater." << endl;
    } else if (*j > *i) {
        cout << *j << " is greater." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}

int main() {
    int a = 10;
    int b = 20;

    findGreater(&a, &b);

    return 0;
}