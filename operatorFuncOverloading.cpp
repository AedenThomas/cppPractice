// Write a Program to Demonstrate the
// i)Operator Overloading. ii) Function Overloading.

#include<iostream>

using namespace std;

// Operator Overloading
class Complex
{
    private:
        int real;
        int imag;
    public:
    Complex (int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};


// Function Overloading
void display(int a)
{
    cout << "int " << a << endl;
}
void display(double a)
{
    cout << "float " << a << endl;
}
void display(char a)
{
    cout << "char " << a << endl;
}

int main()
{
    // Operator Overloading
    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3;
    c3 = c1 + c2;
    cout<<"Operator Overloading"<<endl;
    c3.display();
    cout<<endl;
    cout<<endl;
    cout<<"Function Overloading"<<endl;
    display(10);
    display(10.15);
    display('a');
    return 0;
}