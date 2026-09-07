// Write a function that takes a pointer to an integer and doubles its value.

#include <iostream>
using namespace std;

void doubleValue(int *ptr) {
    *ptr *= 2;
}

int main() {
    int a = 10;

    cout << "Value of A: " << a << endl;
    doubleValue(&a);
    cout << "Value of A after doubling: " << a << endl;
    
    return 0;
}