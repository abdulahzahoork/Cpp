// Student + Sports → Result

// Objective
// Create a result system that evaluates a student's overall performance based on academics and sports.

// Class Structure
// Student
// Data Members
// rollNo
// name
// academicMarks (out of 100)
// Functions
// inputStudent()
// displayStudent()

// Sports
// Data Members
// sportName
// sportsScore (out of 50)
// Functions
// displaySports()

// Result (inherits Student and Sports)
// Data Members
// totalScore
// grade
// Functions
// calculateResult()
// displayResult()


#include <iostream>
#include <string>

using namespace std;

class Student{
    private: 
        string rollNo;
        string name;
        int academicMarks;
    public: 
        Student(string rollNo, string name, int academicMarks) : rollNo(rollNo), name(name), academicMarks(academicMarks) {}

        void displayStudent() {
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Academic Marks: " << academicMarks << endl;
        }

        int getAcademicMarks() const {
            return academicMarks;
        }
};

class Sports {
    private: 
        string sportName;
        int sportScore;
    public: 
        Sports(string sportName, int sportScore) : sportName(sportName), sportScore(sportScore) {}

        void displaySport() {
            cout << "Sport Name: " << sportName << endl;
            cout << "Sport Score: " << sportScore << endl;
        }

        int getSportScore() const {
            return sportScore;
        }
};

class Result : public Student, public Sports {
    private: 
        int totalScore;
        string grade;
    public: 
        Result(string rollNo, string name, int academicMarks, string sportName, int sportScore) : Student(rollNo, name, academicMarks), Sports(sportName, sportScore) {
            totalScore = academicMarks + sportScore;
        }

        string calculateResult() {
            if (totalScore >=130 && totalScore <= 150) {
                grade = "A+";
                return grade;
            } else if (totalScore >= 110) {
                grade = "A";
                return grade;
            } else if (totalScore >= 90) {
                grade = "B";
                return grade;
            } else if (totalScore >= 70) {
                grade = "C";
                return grade;
            } else {
                grade = "Fail";
                return grade;
            }
        }

        void displayResult() {
            displayStudent();
            displaySport();
            cout << "Total Score: " << totalScore << endl;
            cout << "Grade: " << calculateResult() << endl;
        }
};


int main() {
    Result r("su92-bssem-s25-027", "Abdullah", 100, "Badminton", 50);
    r.displayResult();

    return 0;
}