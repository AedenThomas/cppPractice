//  Write a C++ program to create a class called EXPRESSION. Using appropriate member
// functions accepts a valid arithmetic expression. Evaluate the expression and divide the result
// by another variable ‘d’. throw an exception “divide by zero” if the value of d=0. Call a read
// function to read the ‘d’ value again. Rethrow the exception if d still contains 0.


#include <iostream>
using namespace std;
class expression
{
    int a, d;

public:
    void read()
    {
        cin >> a >> d;
    }
    void exp()
    {
        if (d == 0)
        {
            throw 0;
        }
        cout << a / d;
    }
};
int main()
{
    expression e1;
    e1.read();
    while (true)
    {
        try
        {
            e1.exp();
            break;
        }
        catch (int &e)
        {
            cout << "divide by zero\n";
            e1.read();
        }
    }
    return 0;
}
