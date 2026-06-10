#include <iostream>
using namespace std;

class Account
{
    int accNo;
    string name;
    float balance;

public:
    void accept()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "\nAccount Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    Account a;
    a.accept();
    a.display();

    return 0;
}
