// Write a program using class to process shopping list for a departmental store. 
// The list include details such as the code no, item name and price of each item. 
// Add the member functions to add the items, delete the items, to the list and to print the total value of the order.

#include <iostream>

using namespace std;

class item
{
    int code;
    char name[20];
    float price;

public:
    void getdata()
    {
        cout << "Enter code: ";
        cin >> code;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }

    int getcode()
    {
        return code;
    }

    float getprice()
    {
        return price;
    }

    // Delete the item from the list
    void deleteitem()
    {
        code = 0;
        price = 0;
        strcpy(name, "");
    }
    
};

int main()
{
    item list[10];
    int n, i, j, code;
    float total = 0;

    cout << "Enter number of items: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter details of item " << i + 1 << endl;
        list[i].getdata();
    }

    cout << "Enter code of item to be deleted: ";
    cin >> code;

    for (i = 0; i < n; i++)
    {
        if (list[i].getcode() == code)
        {
            for (j = i; j < n - 1; j++)
            {
                list[j] = list[j + 1];
            }
            n--;
            break;
        }
    }

    cout << "The list of items is: " << endl;
    for (i = 0; i < n; i++)
    {
        list[i].putdata();
        total += list[i].getprice();
    }

    cout << "Total value of order: " << total << endl;

    return 0;
}
