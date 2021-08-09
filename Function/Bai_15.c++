#include <iostream>
#include <math.h>

using namespace std;

void Import(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
int SumEvenNum(int a[], int n, int i, int sum)
{
    if (i == n)
        return sum;
    else
    {
        if (a[i] % 2 == 0)
            sum += a[i];
        return SumEvenNum(a, n, i + 1, sum);
    }
}

int main()
{
    int a[100], n, i = 0, sum = 0;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    cout << "Tong cac so chan trong mang: " << SumEvenNum(a, n, i, sum);
    return 0;
}