// Count the number of even numbers in an array using pointers.

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    int count = 0;

    while (ptr < arr+10) {
        if(*ptr %2 == 0) {
            count++;
        }
        ptr++;
    }

    cout << "Even numbers in array: " << count << endl;

    return 0;
}