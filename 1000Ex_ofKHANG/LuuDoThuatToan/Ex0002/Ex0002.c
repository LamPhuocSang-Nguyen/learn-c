//$$61

#include <stdio.h>

int main()
{
    int n;
    int t;
    int Dem;
    int dv;

    printf("Nhap n = ");
    scanf("%d", &n);

    t = n;
    Dem = 0;

    while(t != 0)
    {
        dv = t % 10;
        if(dv % 2 == 1)
            Dem++;

        t = t / 10; 
    }

    printf("So luong chu so le la: %d", Dem);
    
    return 0;
}