// Person → Employee → Manager

// Objective
// Create a program to manage employee and manager information using multilevel inheritance.

// Class Structure

// Person (Base Class)
// Data Members
// name
// age
// Member Functions
// displayPerson()

// Employee (Derived from Person)
// Data Members
// employeeID
// basicSalary
// Member Functions
// displayEmployee()

// Manager (Derived from Employee)
// Data Members
// bonus
// Member Functions
// calculateTotalSalary()
// displayManager()
// Requirements
// Take manager details as input.

// Calculate:
// Total Salary = Basic Salary + Bonus
// Display complete information.

// Concepts Covered
// Multilevel inheritance
// Constructor chaining
// Accessing inherited members


#include <iostream>
#include <string>

using namespace std;

class Person {
    protected: 
        string name;
        int age;
    public:
        Person(string name, int age) : name(name), age(age) {}

        void displayPerson() const {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Employee : public Person {
    protected: 
        string empID;
        int salary;
    public: 
        Employee(string name, int age, string empID, int salary): Person(name, age), empID(empID), salary(salary) {}

        void displayEmployee() {
            displayPerson();
            cout << "Employee ID: " << empID << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager : public Employee {
    private: 
        int bonus;
    public: 
        Manager(string name, int age, string empID, int salary, int bonus) : Employee(name, age, empID, salary), bonus(bonus) {}

        int calculateSalary() {
            salary += bonus; 
            return salary;
        }

        void displayManager() {
            displayEmployee();
            cout << "Bonus: " << bonus << endl;
            cout << "Net Salary: " << calculateSalary() << endl;
        }
};

int main() {
    Manager m("Abdullah", 30, "emp-001", 20000, 2000);

    m.displayManager();

    return 0;
}