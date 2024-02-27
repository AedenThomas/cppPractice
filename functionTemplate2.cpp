// Design a C++ program to find the
// biggest of three numbers using template functions.
#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b, T c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Max = " << max(a, b, c);
    return 0;
}
