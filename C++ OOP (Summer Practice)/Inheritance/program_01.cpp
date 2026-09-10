// Student → Exam
// Student stores roll number and name.
// Exam inherits Student and stores marks.
// Display complete student details.


#include <iostream>
#include <string>

using namespace std;

class Student {
    protected: 
        string rollNo;
        string name;
    public:
        Student(string rollNo, string name) : rollNo(rollNo), name(name) {}
};

class Exam : public Student {
    private: 
        int marks;
    public:
        Exam(string rollNo, string name, int marks) : Student(rollNo, name), marks(marks) {}

        void display() const {
            cout << "Student Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {
    Exam e("su92-bssem-s25-027", "Abdullah", 100);
    e.display();

    return 0;
}