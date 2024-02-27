// Write a program that reads from a file which contains real numbers and displays
// the minimum, maximum and average of the numbers in the file. The user should be able to
// enter the name of the input file from the keyboard.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    double min, max, sum, avg;
    int count;
    cout << "Enter the name of the input file: ";
    string filename;
    cin >> filename;
    fin.open(filename.c_str());
    if (!fin.is_open())
    {
        cout << "Error opening file " << filename << endl;
        return 1;
    }
    fin >> min;
    max = min;
    sum = min;
    count = 1;
    while (fin >> min)
    {
        if (min > max)
        {
            max = min;
        }
        sum += min;
        count++;
    }
    fin.close();
    avg = sum / count;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Average: " << avg << endl;
    return 0;
}