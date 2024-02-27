// Develop a function template for finding average of elements contained in
// an array
#include <iostream>
using namespace std;

template <typename T>
T average(T arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    float avg = average(arr, 5);
    int avg2 = average(arr, 5);
    cout << "Average of array is " << avg << endl;
    cout << "Average of array is " << avg2 << endl;
    return 0;
}