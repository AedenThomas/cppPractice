#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string numbers[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int a,b,i,j;
cin>>a>>b;
if (a<9){
    for(i=a;i<=9;i++){
        cout<<numbers[i]<<'\n';
    }
    if (i%2!=0)
    {
        cout<<"odd";
    }
    else
        cout<<"even";
}
// else
// {
//     if (a%2!=0 or b%2!=0)
//     {
//         cout<<"odd";
//     }
//     else
//         cout<<"even";
// }

// for(j=a;j<=9;j++){
//   if(j%2==0){
//       cout<<"even"<<'\n';
//   }
//   else{
//       cout<<"odd"<<'\n';
//   }
// }  
 
    return 0;
}