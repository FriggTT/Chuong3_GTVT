#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[50][50];
    int row, column;
    cout << "Nhap so hang: ";
    cin >> row;
    cout << "Mhap so cot: ";
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    float sum = 0;
    for (int i = 0; i < row; i += 2)
    {
        for (int j = 0; j < column; j++)
            sum += a[i][j];
    }
    cout << "Tong: " << sum << endl;
    int max = a[0][0];
    for (int i = 0; i < row; i++)
        if (a[i][0] > max)
            max = a[i][0];
    cout << "Gia tri lon nhat: " << max;
    return 0;
}