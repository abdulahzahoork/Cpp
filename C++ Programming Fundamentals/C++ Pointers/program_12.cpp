// Write a function that counts vowels in a string using pointers.

#include <iostream>
using namespace std;

int countVowels(char *ptr) {
    int count = 0;

    while (*ptr) {
        char ch = *ptr;

        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            count++;
        }
        ptr++;
    }
    return count;
}

int main() {
    char name[100] = "Muhammad Abdullah Khan";
    
    cout << "Number of vowels: " << countVowels(name) << endl;

    return 0;
}