// Write a C++ program to Create array of objects of class student with data members for
// storing his USN marks of six subjects for three tests and member functions to input display
// and calculate the avg marks for each subject taking best two of three marks. Write a tester
// program to test these classes.

#include <iostream>

using namespace std;

class student
{
private:
    int USN;
    int marks[100][100];
    int avg[6];

public:
    void input();
    void calculate();
    void print();
};

void student::input()
{
    cout << "Enter USN: ";
    cin >> USN;

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter marks of sub " << i + 1 << ": \n";
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter marks of test " << j + 1 << ": \n";
            cin >> marks[i][j];
        }
    }
}

void student::calculate()
{
    int max1, max2;

    for (int i = 0; i < 6; i++)
    {
        max1 = max2 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (marks[i][j] > max1)
            {
                max2 = max1;
                max1 = marks[i][j];
            }
            else if (marks[i][j] > max2)
            {
                max2 = marks[i][j];
            }
        }
        avg[i] = (max1 + max2) / 2;
    }
}

void student::print()
{
    cout << "USN: " << USN;
    for (int i = 0; i < 6; i++)
    {
        cout << "Marks of sub " << i + 1 << ": \n";
        for (int j = 0; j < 3; j++)
        {
            cout << "Marks of test " << j + 1 << ": \n";
            cout << marks[i][j];
        }
        cout << "Average: " << avg[i];
    }
}

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
        s[i].calculate();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].print();
    }
}