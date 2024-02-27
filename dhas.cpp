Given an array A of integers, For each element in the array, print "fizz" if the element of A is divisible by 3 or "buzz" if divisible by 5,
    In case the number is divisible by both 3 and 5 then print "fizzbuzz" and if it isn't divisible by both 3 and 5 print "not fizzbuzz" Read the input from STDIN and write the output to STDOUT.You should not write arbitrary strings while reading the input and while printing as these contribute to the standard output.Constraints:
5k=n<=100
3 <= arr[n] < 1 x 104
Input Format :
The first line of input contains an integer n, the number of elements in the array.
The next line contains n space-separated integers.
Output Format:
In n number of lines, print the result.
Sample Input1:
4
3 5 15 19
Sample Output1: fizz buzz fizzbuzz not fizzbuzz
Explanation
In Given array,
A[0] = 3, which is divisible by 3, so "fizz"
A[1] = 5, which is divisible by 5, so "buzz"
A[2) = 15 which is divisible by both 3 and 5, so "fizzbuzz"
A[3] = 19 which is not divisible either 3 or 5, so "not fizzbuzz"
Sample Input2:
3
3425 12537 4431
Sample Output2:
buzz fizz fizz
Explanation:
In Given array,
A[0] = 3425 = which is divisible by 5, so "buzz"
A[1] = 12537 = which is divisible by 3, so "fizz"
A[2) = 4431 =which is divisible by 3, so "fizz"

#include <iostream>
#include <string>

using namespace std;

string getResult(int num[])
{
    string res = "";

    return res
}

int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        cout << getResult(num) << endl;
    }
    return 0;
}