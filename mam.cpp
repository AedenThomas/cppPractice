// write c++ program to show the usage of inline function, friend function and operator overloading consider student class which inherits from person class, person has all basic details like name, age and gender, student class has: attributes like- usn, semester  and cgpa, condider inline function display in student class which can show all the basic attribute of basic classes. conder friend function for tthe class student where the student activites are considered to announce the cgpa. operator overloading:- addition of two marks cgpa of sem one and sem 2.


#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string gender;
public:

