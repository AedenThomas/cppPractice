// Write a program that reads student name and usn from keyboard and writes it to the file “input”. Once the writing is complete, program should open the same file read the contents and display it on the console

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("input");
    string name, usn;
    cout << "Enter name and usn: ";
    cin >> name >> usn;
    fout << name << " " << usn;
    fout.close();

    ifstream fin;
    fin.open("input");
    string name1, usn1;
    fin >> name1 >> usn1;
    cout << "Name: " << name1 << endl;
    cout << "USN: " << usn1 << endl;
    fin.close();
    

    //read the contents of the file and display it on the console line by line
    fin.open("input");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    


}
