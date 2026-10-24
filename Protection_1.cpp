#include <iostream>

using namespace std;

int main()
{
    char a = '*';
    printf_s("%c%4c%2c%c%c%c%4c%c%c%c%2c%4c\n",a,a,a,a,a,a,a,a,a,a,a,a);
    printf_s("%c%3c%c%2c%4c%2c%4c%2c%4c\n",a,a,a,a,a,a,a,a,a);
    printf_s("%c%2c%2c%2c%c%c%c%3c%c%c%c%c%2c%c%c%c%c\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    printf_s("%c%c%3c%2c%4c%2c%4c%2c%4c\n",a,a,a,a,a,a,a,a,a);
    printf_s("%c%4c%2c%c%c%c%3c%4c%2c%4c\n",a,a,a,a,a,a,a,a,a,a);

    system("pause");
}