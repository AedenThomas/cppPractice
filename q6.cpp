//two-dimensiaonal array of integers. implement of two matrices m1 and m2 to be added and subtracted.
// perform the addition and subtraction by overloading the operators + and - respectively. display rthe results
#include <stdio.h>
#include <iostream>

using namespace std;

class matrix
{
private:
    int arr[10][10];
    int row;
    int col;

public:
    void getdata();

    int operator==(matrix);
    // void operator+(matrix x);
    void operator-(matrix x);
    // use friend function to add using function name add
    friend void add(matrix &m1, matrix &m2);
    
    //overload the operator to input the matrix
    friend istream &operator>>(istream &in, matrix &m);
    friend ostream &operator<<(ostream &out, matrix &m);

    void display();
};

// friend function to overload the operator +
void add(matrix &m1, matrix &m2)
{
    for (int i = 0; i < m1.row; i++)
    {
        for (int j = 0; j < m1.col; j++)
        {
            m1.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
        }
    }
}

// function to input the matrix using >>
istream &operator>>(istream &in, matrix &m)
{
    cout << "Enter the number of rows: ";
    in >> m.row;
    cout << "Enter the number of columns: ";
    in >> m.col;
    cout << "Enter the elements: ";
    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.col; j++)
        {
            in >> m.arr[i][j];
        }
    }
    return in;
}

ostream &operator<<(ostream &out, matrix &m)
{
    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.col; j++)
        {
            out << m.arr[i][j] << " ";
        }
        out << endl;
    }
    return out; 
}



//check if two matrices have same size using == operator overloading
int matrix::operator==(matrix x)
{
    if (row == x.row && col == x.col)
        return 1;
    else
        return 0;
}

void matrix::getdata()
{

    cout << "Enter the row: ";
    cin >> row;
    cout << "Enter the col: ";
    cin >> col;
    cout << "\nEnter elements: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

// void matrix::operator+(matrix x)
// {
//     int sum[10][10];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             sum[i][j] = arr[i][j] + x.arr[i][j];
//         }
//     }
//     cout << "\nSum of two matrices: \n";
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << sum[i][j] << " ";
//         }
//         cout << "\n";
//     }

// }

void matrix::operator-(matrix x)
{
    int mat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            mat[i][j] = arr[i][j] - x.arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    matrix m1, m2;

    cin >> m1;
    cin >> m2;
    


    if (m1 == m2)
    {
        cout << "\nSum is\n";
        m1 + m2;

        cout << "\nDifference is\n";
        m1 - m2;
    }
    else
        cout << "\nMatrices are not of same size\n";
}