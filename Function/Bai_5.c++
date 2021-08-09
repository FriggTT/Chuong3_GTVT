#include <iostream>
#include <math.h>

using namespace std;

bool CheckisPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
void ListisPrime(int n)
{
    for (int i = 0; i < n; i++)
        if (CheckisPrime(i))
            cout << i << " ";
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    ListisPrime(n);
    return 0;
}