// Declare member functions inside the class but define them outside using the scope resolution operator.

// Example: 
// class Student
// {
// public:
//     void display();
// };

// void Student::display()
// {
//     ...
// }

#include <iostream>
using namespace std;

class Student {
private: 
    string name;
    int age;

public: 
    Student() {
        name = "Unknown";
        age = 0;
    }

    Student(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Constructor called for " << name << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAge (int age) {
        this->age = age;
    }

    void display() const ;

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

void Student :: display() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    Student s1("Muhammad Abdullah Khan", 21);

    Student s2("Uzair Alam", 22);

    Student s3("Tayyab Saeed", 20);

    s1.display();
    s2.display();
    s3.display();
    return 0;
}