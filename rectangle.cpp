#include<iostream>
using namespace std;
int main()
{
float length ,width ,area ,perimeter;
cout<<"enter the lenth of the rectangle :";
cin>>length;
cout<<"enter the width of the rectangle :";
cin>>width;
area = length*width;
perimeter = 2*(length*width);
cout<<"area of rectangle = : "<<area<<endl;
cout<<"perimeter of the rectangle = "<<perimeter<<endl;
return 0;
}