#include <iostream>

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
int MAX(int a[][100], int row, int column)
{
    int max = a[0][0];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}
int MIN(int a[][100], int row, int column)
{
    int min = a[0][0];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            if (a[i][j] < min)
                min = a[i][j];
    return min;
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
    cout << "Gia tri lon nhat: " << MAX(a, row, column) << endl;
    cout << "Gia tri nho nhat: " << MIN(a, row, column);
    return 0;
}