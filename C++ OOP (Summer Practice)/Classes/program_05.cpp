// Problem 5: Employee

// Members:

// - ID
// - Name
// - Salary

// Requirements:

// Parameterized constructor
// Getter functions
// Display information


#include <iostream>
#include <string>
using namespace std;

class Employee {

private: 
    string id;
    string name;
    int salary;

public: 
    Employee(string id, string name, int salary) {
        this->id = id;
        this->name = name;
        if (salary < 0) {
            cout << "Salary cannot be negative! Setting to 0." << endl;
            this->salary = 0;
        } else {
            this->salary = salary;
        }
    }

    string getID() const {
        return id;
    }

    string getName() const {
        return name;
    }

    int getSalary() const {
        return salary;
    }

    void display() const {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee s1("001", "Babraco", 30000);
    Employee s2("002", "Zero Two", 50000);
    Employee s3("003", "Wajahat", 85000);

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();

    return 0;
}