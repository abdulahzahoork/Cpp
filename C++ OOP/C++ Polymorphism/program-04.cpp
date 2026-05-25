// Animal Sound System

// Create a base class Animal:

// Function:
// virtual void speak()
// Derived Classes:
// Dog → "Dog barks"
// Cat → "Cat meows"
// Task:
// Use base class pointer
// Call speak() for both objects

// Focus: runtime polymorphism

#include <iostream>
using namespace std;

class Animal {
public: 
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public: 
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public: 
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
    a->speak();

    a = &c;
    a->speak();

    return 0;
}