// Declare an integer variable and a pointer that stores its address. Print:
// the value of the variable
// the address of the variable
// the value stored in the pointer
// the value obtained by dereferencing the pointer

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << "Value of variable: " << a << endl;
    cout << "Address of variable: " << &a << endl;
    cout << "Value stored in pointer: " << ptr << endl;
    cout << "Value obtained by dereferencing the pointer: " << *ptr << endl;
    return 0;
}