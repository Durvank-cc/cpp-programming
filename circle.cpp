#include<iostream>
using namespace std;
int main()
{
    float radius ,area ,circumference;
    const float pi = 3.14159;

    cout<<"enter the radius of the circle :";
    cin>> radius;

    area = pi*radius*radius;
    circumference = 2*pi*radius;

    cout<<"area of the circle = "<<area<<endl;
    cout<<"circumference of the circle = "<<circumference<<endl;

    return 0;
}
