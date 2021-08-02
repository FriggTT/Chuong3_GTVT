#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a[100], n;
    int count = 0;
    cout << "Nhap phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sqr = sqrt(a[i]);
        if (sqr * sqr == a[i])
            count++;
    }
    cout << "Ket qua: " << count;
    return 0;
}