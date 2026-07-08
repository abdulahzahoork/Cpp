// Write a function that doubles a number using a pointer parameter.

#include <iostream>
using namespace std;

void doubleFunc(int *ptr) {
    *ptr *= 2;
}

int main() {
    int num = 10;

    doubleFunc(&num);

    cout << "Doubled number: " << num << endl;

    return 0;
}


