#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    int rollNo;
    float marks;
    string name;
    void display() 
    {
        cout<<"Roll number. "<< rollNo <<endl;
        cout<<"marks."<< marks <<endl;
        cout<<" student name. "<< name <<endl;

    }
};
 int main()
  {
    Student s1;
    s1.rollNo= 149;
    s1.marks=88;
    s1.name="durvank";
    s1.display();

    return 0;
  }
