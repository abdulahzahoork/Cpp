// Given an array of integers, use a pointer to print all elements without using array indexing ([]).

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = arr;

    // for (int i=0; i<10; i++) {      
    //     cout << *(ptr+i) << " ";
    // }

    while(ptr < arr+10) {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}