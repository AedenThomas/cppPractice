// Write a C++ program to Create array of objects of class student with data members for
// storing his USN, marks of six subjects for three tests, and member functions to input, display,
// and calculate the avg marks for each subject taking best two of three marks. Write a tester
// program to test these classes.

#include <iostream>
using namespace std;
class student
{
private:
    int usn;
    int marks[100][100];
    int avg[6];

public:
    void input();
    void display();
    void calc_avg();
};

void student::input()
{
    cout << "Enter USN: ";
    cin >> usn;
    for (int i = 0; i < 6; i++)
    {
        cout << "Marks of subject " << i + 1 << ": \n";
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter marks for test " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }
}

void student::calc_avg()
{
    // best two of three marks
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

void student::display()
{
    cout << "USN: " << usn << endl;
    cout << "Marks: ";
    for (int i = 0; i < 6; i++)
    {
        cout << "\nSubject " << i + 1 << ": \n";
        for (int j = 0; j < 3; j++)
        {
            cout << "Test " << j + 1 << ": " << marks[i][j] << endl;
        }
        cout << endl;
        cout << "Average of best of two marks: " << avg[i] << endl;
        cout << endl;
    }
}

int main()
{
    cout << "Enter the number of students: ";
    int n;
    cin >> n;
    student s[n];

    for (int i = 0; i < 1; i++)
    {
        s[i].input();
        s[i].calc_avg();
    }

    for (int i = 0; i < 1; i++)
    {
        s[i].display();
    }

    return 0;
}