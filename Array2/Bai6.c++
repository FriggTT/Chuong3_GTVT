#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10] = {0};
    int rowa, columna, rowb, columnb;
    bool flag;
    cout << "Nhap so lieu ma tran 1: \n";
    cout << "Nhap so hang: ";
    cin >> rowa;
    cout << "Mhap so cot: ";
    cin >> columna;
    cout << endl;
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << "Nhap so lieu ma tran 2: \n";
    cout << "Nhap so hang: ";
    cin >> rowb;
    cout << "Mhap so cot: ";
    cin >> columnb;
    cout << endl;
    for (int i = 0; i < rowb; i++)
    {
        for (int j = 0; j < columnb; j++)
        {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }
    if (columna != rowb)
    {
        cout << "Hai ma tran nay khong kha tich.";
        flag = false;
    }
    else
    {
        flag = true;
        for (int i = 0; i < rowa; i++)
            for (int j = 0; j < columnb; j++)
                for (int k = 0; k < columna; k++)
                    c[i][j] += a[i][k] + b[k][j];
    }
    if (flag)
    {
        cout << "Ket qua: \n";
        for (int i = 0; i < rowa; i++)
        {
            for (int j = 0; j < columnb; j++)
                cout << c[i][j] << "\t";
            cout << endl;
        }
    }
    return 0;
}