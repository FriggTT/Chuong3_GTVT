#include <iostream>

using namespace std;

long Factorial(int n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S(n) = 1 x 2 x 3 x...x n = " << Factorial(n);
    return 0;
}