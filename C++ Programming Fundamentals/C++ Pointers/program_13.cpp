// Print all elements of an array using only pointers.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 0) {
    cout << "Invalid size";
    return 0;
}

    int *arr = new int[n];
    cout << "Enter " << n << " number: ";
    for (int i=0; i< n; i++) {
        cin >> *(arr + i);
    }

    for (int i=0; i<n; i++) {
        cout << *(arr + i) << " ";
    }

    delete[] arr;

    return 0;
}