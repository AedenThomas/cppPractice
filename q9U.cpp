#include<iostream>
#include<string>
using namespace std;
class ship
{
protected:
   string name;
   int year;
   public:
       ship()
       {
           name='\0';
           year=0;
       }
       void read()
       {
           cout<<"\nEnter name:";
           cin>>name;
           cout<<"Enter year:";
           cin>>year;
       }
       virtual void print()
       {
           cout<<"\nname:"<<name<<"\nyear:"<<year;
       }
};
class cruiseship:public ship
{
public:
    int maxp;
    cruiseship()
    {
        maxp=0;
    }
    void read()
    {
        ship::read();
        cout<<"Enter maximum number of passengers:";
        cin>>maxp;
    }
    void print()
    {
        cout<<"\nCRUISESHIP\n"<<"Name of the ship:"<<name;
        cout<<"\nmax passenger:"<<maxp;
    }
};
class cargoship:public ship
{
    public:
    int cap;
    cargoship()
    {
        cap=0;
    }
    void read()
    {
        ship::read();
        cout<<"Enter capacity:";
        cin>>cap;
    }
    void print()
    {
        cout<<"\n\nCARGOSHIP\n"<<"name of the ship:"<<name<<"\ncapacity of the ship:"<<cap;
    }
};
int main()
{
    ship *s[2];
    cruiseship c1;
    cargoship c2;
    c1.read();
    c2.read();
    s[0]=&c1;
    s[1]=&c2;
    s[0]->print();
    s[1]->print();

}
