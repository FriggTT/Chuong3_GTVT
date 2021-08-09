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
bool CheckisPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int Count(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (CheckisPrime(a[i]))
            count++;
    return count;
}

int main()
{
    int a[100], n;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    cout << "Co " << Count(a, n) << " so nguyen to co trong mang.";
    return 0;
}