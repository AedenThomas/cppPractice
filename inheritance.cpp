#include <iostream>
using namespace std;

// Write a program to show the implementation of both multilevel and multiple inheritance
// and single inheritance and hierachical inheritance.

// Multilevel inheritance
class multiLevelA
{
public:
    multiLevelA()
    {
        cout << "A" << endl;
    } 
};

// class B is derived from class A
class multiLevelB : public multiLevelA
{
public:
    multiLevelB()
    {
        cout << "B" << endl;
    }
};

// class C is derived from class B
class multiLevelC : public multiLevelB
{
public:
    multiLevelC()
    {
        cout << "C" << endl;
    }
};


//multiple inheritance
class multipleX
{
public:
    multipleX()
    {
        cout << "X" << endl;
    }
};

class multipleY
{
public:
    multipleY()
    {
        cout << "Y" << endl;
    }
};

// class Z is derived from class X and class Y
class multipleZ : public multipleX, public multipleY
{
public:
    multipleZ()
    {
        cout << "Z" << endl;
    }
};


//single inheritance
class singleA
{
public:
    singleA()
    {
        cout << "A" << endl;
    }
};

class singleB : public singleA
{

};



//hierachical inheritance
class hierachyA
{
public:
    hierachyA()
    {
        cout << "A" << endl;
    }
};

class hierachyB 
{
public:
    hierachyB()
    {
        cout << "B" << endl;
    }
};

class hierachyC : public hierachyA, public hierachyB
{

};


int main()
{
    // Multilevel inheritance
    cout << "Multilevel inheritance" << endl;
    multiLevelC c;

    // Multiple inheritance
    cout << "Multiple inheritance" << endl;
    multipleZ z;
    
    // Single inheritance
    cout << "Single inheritance" << endl;
    singleB b;

    // Hierachical inheritance
    cout << "Hierachical inheritance" << endl;
    hierachyC c1;
    return 0;
}