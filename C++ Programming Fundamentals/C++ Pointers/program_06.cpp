// Create pointers for int, float, char, and double. Print their values and addresses.

#include <iostream>
using namespace std;

int main() {
    int i = 8; 
    float f = 2.22;
    char ch = 'c';
    double d = 88.8;

    int *a = &i;
    float *b = &f;
    char *c = &ch;
    double *p = &d;

    cout << "Integer: " << *a << "\tAddress: " << a << endl;
    cout << "Float: " << *b << "\tAddress: " << b << endl;
    cout << "Character: " << *c << "\tAddress: " << static_cast <void*> (c) << endl;
    cout << "Double: " << *p << "\tAddress: " << p << endl;

    return 0;
}