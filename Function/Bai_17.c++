#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float sqrt3(float x)
{
    if (x == 0)
        return 0;
    if (x < 0)
        return (-sqrt3(-x));
    return (exp((log(x) / 3)));
}

int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;
    x = sqrt3(x);
    cout << "Ket qua: " << setprecision(5) << fixed << x;
    return 0;
}