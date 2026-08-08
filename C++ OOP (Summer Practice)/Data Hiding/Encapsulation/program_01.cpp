// Create a Student class with private name, rollNo, and marks.
// Use public getter/setter functions.
// Display student information.

#include <iostream>
#include <string>
using namespace std;

class Student {
    private: 
        string name;
        string rollNo;
        int marks;
    public: 
        Student(string name, string rollNo, int marks) {
            this->name = name;
            this->rollNo = rollNo;
            this->marks = marks;
        }

        void setName(string name) {
            this->name = name;
        }

        void setRollNo(string rollNo) {
            this->rollNo = rollNo;
        }

        void setMarks(int marks) {
            this->marks = marks;
        }

        string getName() const {
            return name;
        }

        string getRollNo() const {
            return rollNo;
        }

        int getMarks() const {
            return marks;
        }
};

int main() {
    Student s("Abdullah", "027", 100);

    cout << "Student Record: " << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    return 0;
}