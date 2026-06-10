#include <iostream>
using namespace std;

struct Employee
{
    int empID;
    string empName;
    float empSalary;
};

void AcceptData(Employee &e)
{
    cout << "Enter Employee ID: ";
    cin >> e.empID;

    cout << "Enter Employee Name: ";
    cin >> e.empName;

    cout << "Enter Employee Salary: ";
    cin >> e.empSalary;
}

void PrintData(Employee e)
{
    cout << "\nEmployee Details" << endl;
    cout << "Employee ID    : " << e.empID << endl;
    cout << "Employee Name  : " << e.empName << endl;
    cout << "Employee Salary: " << e.empSalary << endl;
}

int main()
{
    Employee e1;

    AcceptData(e1);
    PrintData(e1);

    return 0;
}
