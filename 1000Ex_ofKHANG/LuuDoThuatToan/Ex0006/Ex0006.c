//$$131

#include <stdio.h>
#include <math.h>

int main()
{
    float xA, yA;
    float xB, yB;
    float xC, yC;
    float a;
    float b;
    float c;

    printf("Nhap xA: ");
    scanf("%f", &xA);

    printf("Nhap yA: ");
    scanf("%f", &yA);

    printf("Nhap xB: ");
    scanf("%f", &xB);

    printf("Nhap yB: ");
    scanf("%f", &yB);

    printf("Nhap xC: ");
    scanf("%f", &xC);

    printf("Nhap yC: ");
    scanf("%f", &yC);

    a = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
    b = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
    c = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));

    if(a < b + c && b < a + c && c < a + b)
        printf("Ba canh vua nhap tao thanh mot tam giac");

    printf("ba canh khong tao thanh tam giac");
    return 0;

}