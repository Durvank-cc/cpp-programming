#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
    int ID ;
    string name;
    float salary;
    void display() 
    {
        cout<<"employee ID. "<< ID <<endl;
        cout<<" employee name. "<< name <<endl;
        cout<<"salary. "<< salary <<endl;

    }
};
 int main()
  {
    Employee e1;
    e1.ID= 149;
    e1.name="durvank";
    e1.salary=75000;
    e1.display();

    return 0;
  }
