#include <iostream>
using namespace std;

int n1 = 100;   // Global Variable

namespace na
{
    int num1 = 10;
}

void display_num()
{
    cout << "na::num1 = " << na::num1 << endl;
}

namespace N1
{
    int n1 = 11;
    int n2 = 22;
}

namespace N2
{
    int n1 = 33;

    namespace N3
    {
        int n3 = 44;
    }
}

int main()
{
    int n1 = 55;   // Local Variable

    ::display_num();

    cout << "\nLocal n1 = " << n1;
    cout << "\nAddress = " << &n1;

    cout << "\n\nGlobal n1 = " << ::n1;
    cout << "\nAddress = " << &::n1;

    cout << "\n\nN1::n1 = " << N1::n1;
    cout << "\nAddress = " << &N1::n1;

    cout << "\n\nN1::n2 = " << N1::n2;
    cout << "\nAddress = " << &N1::n2;

    cout << "\n\nN2::n1 = " << N2::n1;
    cout << "\nAddress = " << &N2::n1;

    cout << "\n\nN2::N3::n3 = " << N2::N3::n3;
    cout << "\nAddress = " << &N2::N3::n3;

    return 0;
}
