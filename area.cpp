
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area() override
    {
        int l = 10, b = 5;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Circle : public Shape
{
public:
    void area() override
    {
        float r = 7;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main()
{
    Shape *ptr;

    Rectangle r;
    Circle c;

    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();

    return 0;
}
