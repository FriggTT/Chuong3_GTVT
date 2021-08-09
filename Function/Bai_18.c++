#include <iostream>

using namespace std;

long X(int);
long Y(int);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "---------Ket qua---------\n";
    cout << "X(n)= " << X(n) << endl;
    cout << "Y(n)= " << Y(n);
    return 0;
}

long X(int n)
{
    if (n == 0)
        return 1;
    return X(n - 1) + Y(n - 1);
}
long Y(int n)
{
    if (n == 0)
        return 0;
    return 3 * X(n - 1) + 2 * Y(n - 1);
}