#include <iostream>
using namespace std;

inline float areaTriangle(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float base, height;

    cout << "Enter base and height: ";
    cin >> base >> height;

    cout << "Area of Triangle = "
         << areaTriangle(base, height) << endl;

    return 0;
}
