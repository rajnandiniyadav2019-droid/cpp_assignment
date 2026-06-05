#include <iostream>
using namespace std;

// Employee Structure
struct Employee
{
    int empID;
    string empName;
    float empSalary;

    void AcceptData()
    {
        cout << "Enter Employee ID : ";
        cin >> empID;

        cout << "Enter Employee Name : ";
        cin >> empName;

        cout << "Enter Employee Salary : ";
        cin >> empSalary;
    }

    void PrintData()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID     : " << empID << endl;
        cout << "Employee Name   : " << empName << endl;
        cout << "Employee Salary : " << empSalary << endl;
    }
};

// Function Overloading

// 3 int + 1 float
float Add(int a, int b, int c, float d)
{
    return a + b + c + d;
}

// 2 int + 2 float
float Add(int a, int b, float c, float d)
{
    return a + b + c + d;
}

// 1 int + 3 float
float Add(int a, float b, float c, float d)
{
    return a + b + c + d;
}

// 4 int
int Add(int a, int b, int c, int d)
{
    return a + b + c + d;
}

// 4 float
float Add(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    Employee e;

    e.AcceptData();
    e.PrintData();

    cout << "\nFunction Overloading Results\n";

    cout << "3 int + 1 float = "
         << Add(10, 20, 30, 5.5f) << endl;

    cout << "2 int + 2 float = "
         << Add(10, 20, 5.5f, 4.5f) << endl;

    cout << "1 int + 3 float = "
         << Add(10, 2.5f, 3.5f, 4.5f) << endl;

    cout << "4 int = "
         << Add(10, 20, 30, 40) << endl;

    cout << "4 float = "
         << Add(1.1f, 2.2f, 3.3f, 4.4f) << endl;

    return 0;
}
