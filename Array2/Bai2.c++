#include <iostream>

using namespace std;

void Nhap(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void Xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int a[100][100];
    int m, n;
    cout << "Nhap so cot: ";
    cin >> n;
    cout << "Nhap so hang: ";
    cin >> m;
    Nhap(a, m, n);
    Xuat(a, m, n);
    return 0;
}