#include <iostream>

using namespace std;

void Import(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
int Pos_Min(int a[], int n)
{
    int min = 0;
    for (int i = 0; i < n; i++)
        if (a[min] >= a[i])
            min = i;
    return min;
}

int main()
{
    int a[100], n;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    cout << "Vi tri nho nhat: " << Pos_Min(a, n);
    return 0;
}