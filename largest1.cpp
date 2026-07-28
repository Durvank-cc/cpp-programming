#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "Largest number = " << num1;
    } else {
        cout << "Largest number = " << num2;
    }

    return 0;
}