// Write a C++ Program to overload unary minus(-) operator using a friend function

#include <iostream>

using namespace std;
class test
{
private:
    int a;
    int b;

public:
    void read();
    void print();
    friend void operator-(test &t);
};

void test::read()
{
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
}

void test::print()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void operator-(test &t)
{
    t.a = -t.a;
    t.b = -t.b;
}

int main()
{
    test t;
    t.read();
    t.print();
    -t;
    t.print();
    return 0;
}
