#include <iostream>
#include <math.h>

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
    for (int i = 0; i < n; i++)
    {
        bool isPrime = true;
        if (a[i] < 2)
            isPrime = false;
        else
        {
            for (int j = 2; j <= sqrt(a[i]); j++)
                if (a[i] % j == 0)
                    isPrime = false;
        }
        if (isPrime)
            cout << a[i] << " ";
    }
    return 0;
}