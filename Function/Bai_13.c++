#include <iostream>

using namespace std;

int Sum(int n)
{
    if (n == 0)
        return 0;
    return n + Sum(n - 1);
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S(n) = 1 + 2 + 3 +...+ n = " << Sum(n);
    return 0;
}