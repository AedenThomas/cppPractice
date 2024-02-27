// Create a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they operate on the objects of FLOAT.

#include <iostream>

using namespace std;

class Float
{
    float f;

public:
    Float(float a)
    {
        this->f = a;
    }

    float operator+(Float F)
    {
        return (f + F.f);
    }

    float operator-(Float F)
    {
        return (f - F.f);
    }

    float operator*(Float F)
    {
        return (f * F.f);
    }

    float operator/(Float F)
    {
        return (f / F.f);
    }
};

int main()
{
    Float f1(10.0), f2(20.0);
    cout << "f1 + f2 = " << f1 + f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "f1 * f2 = " << f1 * f2 << endl;
    cout << "fi / f2 = " << f1 / f2 << endl;

    return 0;
}