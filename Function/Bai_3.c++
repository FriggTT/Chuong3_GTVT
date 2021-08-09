#include <iostream>
#include <math.h>

using namespace std;

int Sum(int n, int x)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += pow(x, i);
    return sum;
}

int main()
{
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x >> n;
    cout << "S(n) = x + x^2 + x^3 +...+ X^n = " << Sum(n, x);
    return 0;
}