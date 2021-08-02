#include <iostream>

using namespace std;

int main()
{
    char s[100];
    cout << "Nhap chuoi: ";
    gets(s);
    int i = 0;
    for (; s[i]; i++) ;
    cout << i;
    return 0;
}