//$$101

#include <stdio.h>
#include <math.h>

int main()
{
    double s = 0;
    int i = 1;
    float e = 1;
    float mu = pow(10,-6);

    while(e >= mu)
    {
        e = 1 / i;
        s = s + e;
        i = i + 1;
    }

    printf("s = %f", s);

    return 0;
}