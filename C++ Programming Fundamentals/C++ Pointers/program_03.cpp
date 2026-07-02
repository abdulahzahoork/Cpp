// Declare an integer and a pointer. Print:

// Value of the variable
// Address of the variable
// Value stored in the pointer
// Value pointed to by the pointer


#include <iostream>
using namespace std;

int main() {
    int x = 15;
    int *ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr: " << *ptr << endl;
    cout << "Address of ptr: " << ptr << endl;

    return 0;
}