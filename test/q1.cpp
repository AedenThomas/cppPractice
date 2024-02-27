// Given that an EMPLOYEE class contains following members: Employee Number,
// Employee Name, Basic, DA, IT, Net Salary. Member functions: to read the data, to calculate
// Net Salary and to print data members. Write a C++ program to read the data of N
// employees and compute Net Salary of each employee. (Dearness Allowance (DA) = 52% of
// Basic and Income Tax (IT) = 30% of the gross salary. Net Salary = Basic + DA - IT).

#include <iostream>

using namespace std;

class Employee
{
    int empno;
    char empName[40];
    float basic, da, it, netsal;

public:
void read();
void compute();
void print();

};

void Employee::read()
{
    cout<<"Enter empno: ";
    cin>>empno;
    cout<<"Enter Employee Name: ";
    cin>>empName;
    cout<<"Enter basic: ";
    cin>>basic;
}

void Employee::compute()
{
    da=0.52*basic;
    it=0.30*basic;
    netsal=basic+da-it;
}

void Employee::print()
{
    cout<<"\nEmployee number: "<<empno;
    cout<<"\nEmployee name: "<<empName;
    cout<<"\nBasic: "<<basic;
    cout<<"\nDA: "<<da;
    cout<<"\nIT: "<<it;
    cout<<"\nNet Salary: "<<netsal;
}

int main()
{
    int n;
    cout<<"How many employees are there? ";
    cin>>n;
    Employee e[n];
    for (int i=0;i<n;i++)
    {
        e[i].read();
        e[i].compute();
    }

    for (int i=0;i<n;i++)
    {
        e[i].print();
    }
}