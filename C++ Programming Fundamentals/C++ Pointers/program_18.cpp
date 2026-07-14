// Pointer Arithmetic

#include <iostream>
using namespace std;

int main() {
    int *arr;
    arr = new int[5];

    for (int i=0; i<5; i++) {
        arr[i] = i;
    }

    cout << "arr[0]: " << *arr << endl;
    cout << "arr[3]: " << *(arr+3) << endl;

    return 0;
}