#include <iostream>
using namespace std;

class TDate
{
    int day, month, year;

public:
    TDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void setDay(int d)
    {
        day = d;
    }

    void setMonth(int m)
    {
        month = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    void AcceptDate()
    {
        cout << "Enter Day Month Year: ";
        cin >> day >> month >> year;
    }

    void PrintDate()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
};

int main()
{
    TDate d;

    d.AcceptDate();

    cout << "Date = ";
    d.PrintDate();

    return 0;
}
