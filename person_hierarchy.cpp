#include <iostream>
using namespace std;

class Person
{
    char name[10];
    int age;

public:
    Person()
    {
        age = 0;
    }
    void read()
    {
        cout << "Enter name and age\n";
        cin >> name >> age;
    }
    void display()
    {
        cout << "Details\n";
        cout << name << " " << age << endl;
    }
};

class Student :  public Person
{
    int id;

public:
    void read1()
    {
        read();
        cout << "Enter ID: ";
        cin >> id;
    }
    void dis()
    {
        display();
        cout << id << endl;
    }
};
class Faculty :  public Person
{
    char email[15];

public:
    void read2()
    {
        cout << "Enter email : ";
        cin >> email;
    }
    void dis2()
    {
        cout << email << endl;
    }
};
class TA : public Student, Faculty
{
public:
    void read3()
    {
        read1();
        read2();
    }
    void dis3()
    {
        dis();
        dis2();
    }
};
int main()
{
    TA obj;
    obj.read3();
    obj.dis3();
}
