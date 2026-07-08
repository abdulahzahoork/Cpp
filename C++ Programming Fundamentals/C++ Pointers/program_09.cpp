// Write a function that finds the larger of two numbers using pointers.

#include <iostream>
using namespace std;

void findGreater(int *i, int *j) {
    if (*i > *j) {
        cout << *i << " is greater." << endl;
    } else {
        cout << *j << " is greater." << endl;
    }
}

int main() {
    int a = 10;
    int b = 20;

    findGreater(&a, &b);

    return 0;
} 