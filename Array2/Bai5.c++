#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int row, column;
    cout << "Nhap so hang: ";
    cin >> row;
    cout << "Mhap so cot: ";
    cin >> column;
    cout << "Nhap so lieu ma tran 1: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << "Nhap so lieu ma tran 2: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    cout<<"Ma tran sau khi cong: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << c[i][j] << "\t";
        cout << endl;
    }
    return 0;
}