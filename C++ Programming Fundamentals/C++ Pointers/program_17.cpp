// Passing pointers as arguments

#include <iostream>
using namespace std;

void square(int *a) {
    if (a != NULL) {
        *a *= *a;
    }
}

int main() {
    int *p;
    p = new int(10);

    cout << "Value of *p: " << *p << endl;
    square(p);
    cout << "Value of *p after square: " << *p << endl;

    return 0;
}