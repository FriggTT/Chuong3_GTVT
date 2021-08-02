#include <iostream>

using namespace std;

int main()
{
    int a[100], n;
    cout << "Nhap phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Mang duoc thay doi: \n";
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            a[i] = 0;
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;
}