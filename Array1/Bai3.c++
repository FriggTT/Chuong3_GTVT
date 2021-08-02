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
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (min > a[i])
            min = a[i];
    cout<<"Vi tri cac so nho nhat: \n";
    for (int i = 0; i < n; i++)
        if (a[i] == min)
            cout << i << " \n";
    return 0;
}