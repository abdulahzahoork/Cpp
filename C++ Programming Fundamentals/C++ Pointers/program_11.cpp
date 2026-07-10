// Write a function to swap two numbers using pointers.

#include <iostream>
using namespace std;

void swapFunc(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main() {
    int a = 10;
    int b = 20;

    swapFunc(&a, &b);

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    return 0;
}

