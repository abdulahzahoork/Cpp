// Change the value of a variable through a pointer.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *x = &a;

    *x = 20;
    cout << "Value of a: " << a << endl;

    return 0;
}