// Problem 1: Student Information

// Create a Student class.

// Data members:

// - Name
// - Roll Number
// - Age

// Requirements:

// Make data members private.
// Create setters and getters.
// Create a member function display().
// Use the default constructor to initialize everything with default values.

// Concepts practiced

// Class
// Object
// Private/Public
// Getter & Setter
// Default Constructor
// Member Functions

#include <iostream>
#include <string>
using namespace std;

class Student {

private: 
    string name;
    string rollNo;
    int age;

public: 
    Student() {
        name = "unknown";
        rollNo = "00";
        age = 0;
    }

    void setName(string name) {
        this->name = name;
    }

    void setRollNo(string r) {
        rollNo = r;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getName() const {
        return name;
    }

    string getRollNo() const {
        return rollNo;
    }

    int getAge() const {
        return age;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
    }
};


int main() {
    string name;
    int age;
    string rollNo;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Roll No: ";
    getline(cin, rollNo);

    Student s1;
    s1.setName(name);
    s1.setAge(age);
    s1.setRollNo(rollNo);

    cout << "\nStudent Information: " << endl;
    s1.display();

    return 0;
}