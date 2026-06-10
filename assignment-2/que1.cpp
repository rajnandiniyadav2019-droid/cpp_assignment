#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;
    float empSalary;

public:
    void AcceptData()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Employee Salary: ";
        cin >> empSalary;
    }

    void PrintData()
    {
        cout << "\nEmployee Details" << endl;
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Salary: " << empSalary << endl;
    }
};

int main()
{
    Employee e;
    e.AcceptData();
    e.PrintData();

    return 0;
}
