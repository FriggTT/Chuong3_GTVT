#include <iostream>

using namespace std;

int Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S(n) = 1 + 2 + 3 +...+ n = " << Sum(n);
    return 0;
}
