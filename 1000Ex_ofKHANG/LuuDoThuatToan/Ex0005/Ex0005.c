//$$113

#include <stdio.h>

int main()
{
    int n;
    int i = 2;
    int at = 2;
    int ahh;

    printf("Nhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        ahh = at + 2 * i + 1;
        i = i + 1;
        at = ahh;
    }

    printf("ahh = %d", ahh);

    return 0;
}