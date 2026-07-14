// Pointers and Dynamic Memory

#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 10;

    cout << "The value of object p points to: " << *p << endl;

    int *q;
    q = p;
    cout << "The value of object q points to: " << *q << endl;

    int *arr;
    arr = new int[500];
    arr[0] = 50; 
    cout << "arr[0]: " << arr[0] << endl;

    delete p, q;
    delete[] arr;

    cout << "p now points to a random value and cannot be accessed: " << *p << endl;
    p = new int(5);
    cout << "The value of the object p points to: " << *p << endl;

    return 0;
} 