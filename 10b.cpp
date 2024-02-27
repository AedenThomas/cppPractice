// Write a program to sort using bubble sort by applying function templates.

#include<iostream>
using namespace std;
template<class T>
void swapFunction(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template<class T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swapFunction(arr[j], arr[j + 1]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}