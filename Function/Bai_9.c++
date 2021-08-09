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
bool Check(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0 && a[i] < 2004)
            return true;
    return false;
}

int main()
{
    int a[100], n;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    if (Check(a, n))
        cout << "Co ton tai.";
    else
        cout << "Khong ton tai.";
    return 0;
}