#include <iostream>
using namespace std;

class SavingAccount
{
    int accNo;
    string name;
    float balance, interestRate;

public:

    // Constructor
    SavingAccount(int a, string n, float b, float i)
    {
        accNo = a;
        name = n;
        balance = b;
        interestRate = i;
    }

    void deposit()
    {
        float amount;
        cout << "Enter deposit amount: ";
        cin >> amount;
        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter withdraw amount: ";
        cin >> amount;
        balance = balance - amount;
    }

    void calculateInterest()
    {
        float interest;
        interest = balance * interestRate / 100;
        cout << "Interest = " << interest << endl;
    }

    void display()
    {
        cout << "\nAccount No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main()
{
    int accNo;
    string name;
    float balance, interestRate;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate: ";
    cin >> interestRate;

    SavingAccount s(accNo, name, balance, interestRate);

    s.deposit();
    s.withdraw();
    s.calculateInterest();
    s.display();

    return 0;
}