#include <iostream>

using namespace std;

int main()
{
    int a[100], n;
    int sum = 0, count = 0;
    cout << "Nhap phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && a[i] % 2 != 0)
        {
            sum += a[i];
            count++;
        }
    }
    cout << "Ket qua: " << float(sum) / float(count);
    return 0;
}