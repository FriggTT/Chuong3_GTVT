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
int CountPositiveNum(float a[], int n, int i, int count)
{
    if (i == n)
        return count;
    else
    {
        if (a[i] > 0)
            count++;
        return CountPositiveNum(a, n, i + 1, count);
    }
}

int main()
{
    float a[100], n, i = 0, count = 0;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    cout << "Co " << CountPositiveNum(a, n, i, count) << " so duong trong mang.";
    return 0;
}