#include <iostream>
#include <math.h>
using namespace std;
bool checkSquareNumber(int n)
{
    if (n < 1)
        return false;
    int i = sqrt(n);
    if (i * i == n)
        return true;
    return false;
}
void printSquareNumber(int n)
{
    cout << "Cac so chinh phuong nho hon " << n << endl;
    int a = sqrt(n);
    if (checkSquareNumber(n))
        for (int i = 1; i < a; i++)
            cout << i * i << " ";
    else
        for (int i = 1; i <= a; i++)
            cout << i * i << " ";
}
int main()
{
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    printSquareNumber(n);
    return 0;
}