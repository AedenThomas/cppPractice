//Write a C++ program to create a class called COMPLEX and implement the following
// overloading functions ADD that return a COMPLEX number.
// i. ADD (a, s2) – where a is an integer (real part) and s2 is a complex number.
// ii. ADD (s1, s2) – where s1 and s2 are complex numbers.
#include <iostream>

using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    void input();
    void output();
    friend complex add(int, complex);
    friend complex add(complex, complex);
};

complex add(int a, complex s2)
{
    complex temp;
    temp.real = s2.real + a;
    temp.img = s2.img;
    return temp;
}

complex add(complex s1, complex s2)
{
    complex s3;
    s3.real = s1.real + s2.real;
    s3.img = s1.img + s2.img;
    return s3;
}

void complex::input()
{
    cout << "Enter real part: ";
    cin >> real;
    cout << "ENter imaginary part: ";
    cin >> img;
}

void complex::output()
{
    cout << real << "+" << img << "i"
         << "\n";
}


int main()
{
    complex s1, s2, sum1, sum2;;
    int a;
    s1.input();
    s2.input();
    cout<<"\nEnter a: ";
    cin>>a;
    sum1=add(a,s2);
    sum2=add(s1,s2);
}