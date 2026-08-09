// Employee Salary

// Private members: name, salary.
// Create setters/getters.
// Don't allow a negative salary.

#include <iostream>
#include <string>

using namespace std;

class EmployeeSalary {
    private: 
        string name;
        int salary;
    
    public: 
        EmployeeSalary(string name, int salary) {
            this->name = name;
            if (salary < 0) {
                cout << "Salary cannot be negative!" << endl;
                this->salary = 0;
            } else {
                this->salary = salary;
            }
        }

        string getName() const {
            return name;
        }

        int getSalary() const {
            return salary;
        }

        void setName(string name) {
            this->name = name;
        }

        void setSalary(int salary) {
            if (salary < 0) {
                cout << "Salary cannot be negative!" << endl;
            } else {
                this->salary = salary;
            }
        }
};

int main() {
    EmployeeSalary emp("Dilawar", 10000);
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;
    emp.setSalary(-50);

    return 0;
}