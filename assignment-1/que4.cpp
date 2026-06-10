#include <iostream>
using namespace std;

void display(int a = 10, int b = 20, int c = 30)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main()
{
    cout << "Using default values:" << endl;
    display();

    cout << "\nPassing one value:" << endl;
    display(100);

    cout << "\nPassing all values:" << endl;
    display(100, 200, 300);

    return 0;
}
