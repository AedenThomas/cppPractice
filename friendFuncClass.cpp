// Write a Program to Demonstrate Friend Function and Friend Class.
#include <iostream>
using namespace std;

class B;
// Friend Function

class A
{
    private:
        int a=100;
    public:
        friend class B; // Friend Class
        void showB(B&); // Friend Function
};

//B is a Friend Class of A so it can access private members of A
class B
{
    private:
        int b=50;
    public:
        void displayFriendClass(A a)
        { 
            cout<<"A.a = "<<a.a<<endl;
        } 
        
        friend void A::showB(B&); // Friend Function
        
};

//showB which is defined in A is a Friend Function of B so it can access private members of B
void A::showB(B& b)
{
    cout<<"B.b = "<<b.b<<endl;
}

// Driver Code 
int main()
{
    A a;
    B b;
    cout<<"Calling Friend Class"<<endl;
    b.displayFriendClass(a);
    cout<<"Calling Friend Function"<<endl;
    a.showB(b);
    return 0;
}