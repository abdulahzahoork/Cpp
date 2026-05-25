// Problem 3: Student Result System

// Create a class Student:

// Data Members:
// name
// marks
// Overloaded Functions:
// setData(string name, int marks)
// setData(string name)
// setData(int marks)
// Task:
// Display student info using another function


#include <iostream>
using namespace std;

class Student {

private: 
    string name;
    int marks;

public: 
    void setData(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }

    void setData(string name) {
        this->name = name;
    }

    void setData (int marks) {
        this->marks = marks;
    }

    void display() const {
        cout << "Name: " << name << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setData("Abdullah", 100);
    s.display();
}  