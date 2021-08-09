#include <iostream>

using namespace std;

void Import(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void Swap(float a, float b)
{
    float temp = a;
    a = b;
    b = temp;
}
void Sort(float a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}
void Print(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "a[" << i << "] = " << a[i] << endl;
}

int main()
{
    float a[100], n;
    cout << "Nhap phan tu n: ";
    cin >> n;
    Import(a, n);
    Sort(a, n);
    cout << "--------Sau khi duoc sap xep--------\n";
    Print(a, n);
    return 0;
}