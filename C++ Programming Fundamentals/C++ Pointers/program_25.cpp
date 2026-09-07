// Find the largest element in an array using pointer arithmetic.

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int largest = arr[0];
    int *ptr = arr+1;

    while (ptr < arr+10) {
        if (*ptr > largest) {
            largest = *ptr;
        }
        ptr++;
    }

    cout << "Largest element: " << largest << endl;

    return 0;
}