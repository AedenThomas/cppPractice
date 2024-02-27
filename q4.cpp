// Write a program to find the transpose of a matrix using friend function and with member
// functions to read and display the matrix.

#include <iostream>
using namespace std;

class matrix
{
    public:
    int row, col;
    int mat[10][10];


    void input()
    {
        cout << "Enter row: ";
        cin >> row;
        cout << "Enter column: ";
        cin >> col;       
        int i, j;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void display()
    {
        int i, j;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    friend matrix transpose(matrix);
};
matrix transpose(matrix m1)
{
    matrix temp;
    int i, j;
    temp.row = m1.col;
    temp.col = m1.row;
    for (i = 0; i < m1.col; i++)
    {
        for (j = 0; j < m1.row; j++)
        {
            temp.mat[i][j] = m1.mat[j][i];
        }
    }
    return temp;
}
int row;
int col;
int main()
{
    matrix m1, m2;
      
    m1.input();
    cout << endl;
    m2 = transpose(m1);
    m2.display();
}