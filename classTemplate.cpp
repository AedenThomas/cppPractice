// Develop a class template for creating a stack with push pop and display
// operations. Write a main function to create stack of integers and float
// numbers.
#include <iostream>
using namespace std;
#define MAX 10
template <typename T>
class Stack
{
private:
    T arr[MAX];
    int top;
public:
    Stack()
    {
        top = -1;
    }
    void push(T x)
    {
        if (top == MAX - 1)
            cout << "Stack is full\n";
        else
        {
            top++;
            arr[top] = x;
        }
    }
    T pop()
    {
        if (top == -1)
            cout << "Stack is empty\n";
        else
        {
            T x = arr[top];
            top--;
            return x;
        }}
    void display()
    {
        if (top == -1)
            cout << "Stack is empty\n";
        else
        {
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};
int main()
{
    Stack<int> s1;
    Stack<float> s2;
    s1.push(1);
    s1.push(2);
    s1.display();
    s2.push(1.1);
    s2.push(2.2);
    s2.display();
    s1.pop();
    s1.display();
    s2.pop();
    s2.display();
    


}