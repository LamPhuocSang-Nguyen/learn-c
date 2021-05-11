#include <stdio.h>

int main()
{
    float s = 0;
    int n;
    int i = 2;

    printf("n = ");
    scanf("%3d",&n);

    while(i <= n * 2)
    {
        s = s + 1.0 / i;
        i = i + 2;
    }

    printf("s = %3.3f", s);

    return 1;
}