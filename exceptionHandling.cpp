// Define exception handling. For a positive input throw an integer
// exception, for a negative input throw a character exception, for zero as an
// input, throw a string exception. Given the scenario, develop a C++
// program to handle exceptions.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a > 0)
    {
        throw a;
    }
    else if (a < 0)
    {
        throw 'a';
    }
    else
    {
        throw "Zero";
    }
    return 0;
}