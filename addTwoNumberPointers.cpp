// Write C++ Program to add two numbers using Pointers.
#include <iostream>
using namespace std;

void add(int *a, int *b)
{
    *a = *a + *b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    add(&a, &b);
    cout << "Sum = " << a;
    return 0;
}
