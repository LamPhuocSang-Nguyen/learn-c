//$$77

#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    int k;
    float s;
    int i;
    
    s = 0;
    i = 1;

    printf("Nhap n:");
    scanf("%f", &n);

    printf("Nhap k:");
    scanf("%d", &k);

    while(i <= n)
    {
        s = s + pow(i,k);
        i = i + 1;
    }

    printf("s = %f", s);

    return 0;
}