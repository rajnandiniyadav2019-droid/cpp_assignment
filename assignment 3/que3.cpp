#include <iostream>
using namespace std;

class Cylinder
{
    int height;
    int radius;
    float volume;

public:
    Cylinder()
    {
        height = 0;
        radius = 0;
        volume = 0;
    }

    Cylinder(int h, int r)
    {
        height = h;
        radius = r;
        volume = 0;
    }

    void setHeight(int h)
    {
        height = h;
    }

    void setRadius(int r)
    {
        radius = r;
    }

    int getHeight()
    {
        return height;
    }

    int getRadius()
    {
        return radius;
    }

    void CalculateVolume()
    {
        volume = 3.14 * radius * radius * height;
    }

    float getVolume()
    {
        return volume;
    }
};

int main()
{
    Cylinder c;

    c.setHeight(10);
    c.setRadius(5);

    c.CalculateVolume();

    cout << "Height = " << c.getHeight() << endl;
    cout << "Radius = " << c.getRadius() << endl;
    cout << "Volume = " << c.getVolume() << endl;

    return 0;
}
