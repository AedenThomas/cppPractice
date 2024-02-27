// Create a class college with two member variables char * name and int len.
// The class should have a constructor and member methods set name () and
// display(). Write a driver function that creates array of 10 pointers and
// stores ten objects of college.
#include <iostream>
#include <string.h>
using namespace std;

class college{
    char *name;
    int len;
    public:
        void setname(char *n);
        void getdata(char *n,int l);
        void display(void);
};
void college :: setname(char *n){
    name=n;
    len=strlen(n);
}
void college :: getdata(char *n,int l){
    name=n;
    len=l;
}
void college :: display(void){
    cout<<"Name : "<<name<<"\n";
    cout<<"Length : "<<len<<"\n";
}
int main(){
    college c[10];
    char n[10];
    int l;
    for(int i=0;i<10;i++){
        cout<<"Enter name : ";
        cin>>n;
        cout<<"Enter length : ";
        cin>>l;
        c[i].getdata(n,l);
    }
    for(int i=0;i<10;i++){
        c[i].display();
    }
    return 0;
}
