#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    long long fact1 = 1, fact2 = 1;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    for (int i = 1; i <= num1; i++)
    {
        fact1 = fact1 * i;
    }

    for (int i = 1; i <= num2; i++)
    {
        fact2 = fact2 * i;
    }

    cout << "Factorial of " << num1 << " = " << fact1 << endl;
    cout << "Factorial of " << num2 << " = " << fact2 << endl;

    return 0;
}