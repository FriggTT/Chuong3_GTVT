#include <iostream>
#include <math.h>

using namespace std;

void Nhap(int a[][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void Xuat(int a[][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}
bool CheckisPrime(int n)
{
    if (n < 2)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
    }
    return true;
}
int CountisPrime(int a[][100], int row, int column)
{
    int count = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            if (CheckisPrime(a[i][j]))
                count++;
    return count;
}
void ListisPrime(int a[][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            if (CheckisPrime(a[i][j]))
                cout << a[i][j] << "\t";
    }
}
int main()
{
    int a[100][100];
    int row, column;
    cout << "Nhap so hang: ";
    cin >> row;
    cout << "Nhap so cot: ";
    cin >> column;
    Nhap(a, row, column);
    Xuat(a, row, column);
    cout << endl;
    cout << "So nguyen to duoc liet ke: \n";
    ListisPrime(a, row, column);
    cout << endl;
    cout << "Co " << CountisPrime(a, row, column) << " so nguyen to";
    return 0;
}