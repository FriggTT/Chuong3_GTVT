#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], kitu;
    cout << "Nhap chuoi: ";
    gets(s);
    cout << "Nhap ki tu: ";
    cin >> kitu;
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == kitu)
            count++;
    if (count > 0)
        cout << "Ki tu " << kitu << " trong chuoi xuat hien " << count << " lan";
    else
        cout << "Ki tu " << kitu << " trong chuoi khong xuat hien";
    return 0;
}