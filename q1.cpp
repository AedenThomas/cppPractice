// Given that an EMPLOYEE class contains following members: Employee Number,
// Employee Name, Basic, DA, IT, Net Salary. Member functions: to read the data, to calculate
// Net Salary and to print data members. Write a C++ program to read the data of N
// employees and compute Net Salary of each employee. (Dearness Allowance (DA) = 52% of
// Basic and Income Tax (IT) = 30% of the gross salary. Net Salary = Basic + DA - IT).

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Employee
{
private:
    int empno;
    char name[50];
    float basic;
    float da;
    float it;
    float netsalary;

public:
    void read();
    void calculate();
    void print();
};

void Employee::calculate()
{
    da = basic * 0.52;
    it = basic * 0.30;
    netsalary = basic + da - it;
}

void Employee::print()
{
    cout << "Employee Number: " << empno << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Basic Salary: " << basic << endl;
    cout << "Dearness Allowance: " << da << endl;
    cout << "Income Tax: " << it << endl;
    cout << "Net Salary: " << netsalary << endl;
}

void Employee::read()
{
    cout << "Enter the Employee Number: ";
    cin >> empno;
    cout << "Enter the Employee Name: ";
    cin >> name;
    cout << "Enter the Basic Salary: ";
    cin >> basic;
}

int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        e[i].read();
        e[i].calculate();
    }
    for (int i = 0; i < n; i++)
    {
        e[i].print();
    }
    return 0;
}