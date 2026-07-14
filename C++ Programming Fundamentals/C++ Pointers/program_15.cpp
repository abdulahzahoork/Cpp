#include <iostream>
using namespace std;

int main() {

    int num = 10;
    cout << "Value of Num: " << num << endl;
    cout << "Address of Num: " << &num << endl;

    int *ptr;

    ptr = &num;
    cout << "Value of ptr: " << *ptr << endl;
    cout << "Address of ptr: " << ptr << endl;

    *ptr = 20;
    cout << "Value of Num: " << num << endl;
    cout << "Value of ptr: " << *ptr << endl;
    cout << "Address of Num: " << &num << endl;
    cout << "Address of ptr: " << ptr << endl;

    int arr[] = {1, 3, 5, 7, 11, 13, 17, 19};
    ptr = arr;
    cout << "Value of arr[0]: " << *ptr << endl;
    cout << "Value of arr[1]: " << *(ptr+1) << endl;
    cout << "Value of arr[5]: " << *(ptr+5) << endl;

    return 0;
}