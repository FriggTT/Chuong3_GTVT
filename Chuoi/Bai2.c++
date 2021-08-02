#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    bool check;
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        check = true;
        if (s[i] != s[strlen(s) - i - 1])
            check = false;
    }
    if (check)
        cout << "Chuoi cua nhap la doi xung";
    else
        cout << "Chuoi vua nhap khong doi xung";
    return 0;
}