// Write a C++ program to implement an array using class templates. Implement the
// following operations: Adding two arrays, finding the max and min in an array.

#include <iostream>

using namespace std;
template <class T>
class Array
{
private:
    T *arr;
    int size;

public:
    Array(int size)
    {
        this->size = size;
        arr = new T[size];
    }
    void input()
    {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void output()
    {
       
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void add(Array<T> &a)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] += a.arr[i];
        }
    }
    void max()
    {
        T max = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << max << endl;
    }
    void min()
    {
        T min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout  << min << endl;
    }
};
int main()
{
    Array<int> a(5);
    a.input();
    
    Array<int> b(5);
    b.input();
    
    cout<<"Max of a: ";
    a.max();
    cout<<"Min of a: ";
    a.min();

    cout<<"Max of b: ";
    b.max();
    cout<<"Min of b: ";
    b.min();
    
    a.add(b); 
    cout<<"After adding a and b: ";
    a.output();
    cout<<"Maxium after adding a and b: ";
    a.max();
    cout<<"Minium after adding a and b: ";
    a.min();
    return 0;
}