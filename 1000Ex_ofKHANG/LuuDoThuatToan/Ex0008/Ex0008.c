//$$139

#include <stdio.h>

int main()
{
    float a;
    float b;
    float x = 0;
    
    printf("Giai phuong trinh ax + b = 0");

    printf("\nNhap a = ");
    scanf("%f", &a);

    printf("\nNhap b = ");
    scanf("%f", &b);

    if(a == 0)
    {
        if(b == 0)
        {
            printf("\nPhuong trinh vo so nghiem");
        }
        else
        {
            printf("\nPhuong trinh vo nghiem");
        }
    }
    else
    {
        x = - b / a;
        printf("\nPhuong trinh co mot nghiem la: %.1f", x);
    }

    return 0;
}