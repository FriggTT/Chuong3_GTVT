#include <iostream>
#include <string>

using namespace std;

float Avg(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    float a, b;
    string Name;
    cout << "Nhap ten: ";
    getline(cin, Name);
    cout << "Nhap diem toan, diem van: ";
    cin >> a >> b;
    cout << "Diem trung binh: " << Avg(a, b);
    return 0;
}