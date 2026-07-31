#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, original, rem, digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count the number of digits
    while (original != 0)
    {
        digits++;
        original = original / 10;
    }

    original = num;

    // Calculate sum of each digit raised to the power of digits
    while (original != 0)
    {
        rem = original % 10;
        sum = sum + pow(rem, digits);
        original = original / 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}