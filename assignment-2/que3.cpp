#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void AcceptComplex()
    {
        cout << "Enter Real Part: ";
        cin >> real;

        cout << "Enter Imaginary Part: ";
        cin >> imaginary;
    }

    void PrintComplex()
    {
        cout << real << " + j" << imaginary << endl;
    }
};

int main()
{
    Complex c1;
    c1.AcceptComplex();

    cout << "Complex Number: ";
    c1.PrintComplex();

    return 0;
}
