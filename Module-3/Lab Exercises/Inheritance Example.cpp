#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Student : public Person {
public:
    string course;
    int rollNo;

    void getStudentDetails() {
        getDetails();  
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter course: ";
        cin >> course;
    }

    void displayStudentDetails() {
        displayDetails();  
        cout << "Roll No: " << rollNo << ", Course: " << course << endl;
    }
};
class Teacher : public Person {
public:
    string subject;
    double salary;

    void getTeacherDetails() {
        getDetails();  
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherDetails() {
        displayDetails();  
        cout << "Subject: " << subject << ", Salary: " << salary << endl;
    }
};
int main(){
    Student s;
    Teacher t;

    cout << "--- Enter Student Details ---" << endl;
    s.getStudentDetails();
    cout << "\n--- Student Information ---" << endl;
    s.displayStudentDetails();

    cout << "\n--- Enter Teacher Details ---" << endl;
    t.getTeacherDetails();
    cout << "\n--- Teacher Information ---" << endl;
    t.displayTeacherDetails();
    return 0;
}

