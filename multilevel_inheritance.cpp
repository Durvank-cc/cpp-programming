
#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    void getStudent()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin >> name;
    }
};

class Exam : public Student
{
public:
    int m1, m2;

    void getMarks()
    {
        cout << "Enter marks of two subjects: ";
        cin >> m1 >> m2;
    }
};

class Result : public Exam
{
public:
    void display()
    {
        cout << "\n--- Student Result ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << m1 + m2 << endl;
        cout << "Percentage: " << (m1 + m2) / 2.0 << "%" << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.display();

    return 0;
}
