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

    TDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void AcceptDate()
    {
        cout << "Enter Day Month Year: ";
        cin >> day >> month >> year;
    }

    void PrintDate_dd_mm_yyyy()
    {
        cout << day << "-" << month << "-" << year << endl;
    }

    void PrintDate_dd_month_yyyy()
    {
        string months[] = {"January","February","March","April","May","June",
                           "July","August","September","October","November","December"};

        cout << day << "-" << months[month - 1] << "-" << year << endl;
    }

    bool ValidateDate()
    {
        if (year < 1)
            return false;

        if (month < 1 || month > 12)
            return false;

        if (day < 1 || day > 31)
            return false;

        return true;
    }
};

int main()
{
    TDate d;

    d.AcceptDate();

    if (d.ValidateDate())
    {
        cout << "Valid Date" << endl;
        d.PrintDate_dd_mm_yyyy();
        d.PrintDate_dd_month_yyyy();
    }
    else
    {
        cout << "Invalid Date" << endl;
    }

    return 0;
}
