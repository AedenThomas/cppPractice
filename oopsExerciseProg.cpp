#include <iostream>
using namespace std;

// Write a program which illustrates how constructors are implemented when classes are inherited
class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }
    A(int a)
    {
        cout << "A(int a)" << endl;
    }
    A(int a, int b)
    {
        cout << "A(int a,int b)" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B()" << endl;
    }
    B(int a)
    {
        cout << "B(int a)" << endl;
    }
    B(int a, int b)
    {
        cout << "B(int a,int b)" << endl;
    }
};

int main()
{
    B b;
    B b1(1);
    B b2(1, 2);
    return 0;
}