//$$49

#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("Nhap n = ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(n % i == 0)
            printf("%d \t", i);

        i = i + 1;
    }
    return 0;
}