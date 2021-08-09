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
float Max(float a[], int n)
{
    float max = a[0];
    for (int i = 0; i < n; i++)
        if (max <= a[i])
            max = a[i];
    return max;
}

int main()
{
    float a[100], n;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    cout << "Phan tu lon nhat: " << Max(a, n);
    return 0;
}