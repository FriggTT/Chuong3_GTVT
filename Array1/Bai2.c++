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
    int max = a[0];
    for (int i = 0; i < n; i++)
        if (max < a[i])
            max = a[i];
    cout << "So lon nhat: " << max;
    return 0;
}