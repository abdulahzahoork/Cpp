// Person: name, age.
// Employee: employee ID, salary.
// Calculate annual salary.

#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
        string name;
        int age;
    public: 
        Person(string name, int age) : name(name), age(age) {}
};

class Employee : public Person {
    private: 
        string empID;
        int salary; 
    public: 
        Employee(string name, int age, string empID, int salary) : Person(name, age), empID(empID), salary(salary) {}

        void annualSalary() {
            cout << "Annual Salary: " << salary*12 << endl;
        }
};

int main() {
    Employee e ("Abdullah", 28, "emp-001", 7000);
    e.annualSalary();

    return 0;
}