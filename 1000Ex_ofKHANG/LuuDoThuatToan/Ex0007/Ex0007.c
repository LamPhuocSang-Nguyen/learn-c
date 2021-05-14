//$$133

#include <stdio.h>

int main()
{
    float x;
    float y;
    float z;

    printf("\nCho biet tam giac la tam giac gi");

    do
    {
        printf("\nNhap canh x = ");
        scanf("%f", &x);

        printf("\nNhap canh y = ");
        scanf("%f", &y);

        printf("\nNhap canh z = ");
        scanf("%f", &z);
    } while (x < 0 || y < 0 || z < 0);

    if(x + y > z && x + z > y && y + z > x)
    {
        if(x == y && x == z)
        {
            printf("\nLa tam giac deu");
        }
        else
        {
            if(x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
            {
                if(x == y || x == z || y == z)
                {
                    printf("\ntam giac vuong can");    
                }
                printf("\nTam giac vuong");
            }
            else
            {
                if(x == y || y == z || z == x)
                {
                    printf("\nTam giac can");
                }
                else
                {
                    printf("\nTam giac thuong");
                }
            }
        }
    }
    else
        printf("\nKhong tao thanh duoc tam giac");
    
    return 0;
}