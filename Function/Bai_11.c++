#include <iostream>

using namespace std;

void Import(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
float Sum(float a[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
            sum += a[i];
    return sum;
}

int main()
{
    float a[100], n;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    cout << "Tong cac gia tri am: " << Sum(a, n);
    return 0;
}