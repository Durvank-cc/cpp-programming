#include <iostream>
using namespace std;

class Complex
{
    int real1, imag1, real2, imag2;

    public:
    void input()
    {
        cout << "Enter first complex number: ";
        cin >> real1 >> imag1;

        cout << "Enter second complex number: ";
        cin >> real2 >> imag2;
    }

    void add()
    {
        cout << "Addition = " << real1 + real2 << " + "
        << imag1 + imag2 << "i" << endl;
    }

    void sub()
    {
        cout << "Subtraction = " << real1 - real2 << " + "
        << imag1 - imag2 << "i" << endl;
    }
};

int main()
{
    Complex c;

    c.input();
    c.add();
    c.sub();

    return 0;
}