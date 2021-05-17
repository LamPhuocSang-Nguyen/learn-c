//$$143

#include <stdio.h>

int n = 0;

void Nhap();
int KtHoanThien();
void XuLy();

int main()
{
    Nhap();
    XuLy();

    return 0;
}

void XuLy()
{
    int kq = KtHoanThien();

    if(kq)
    {
        printf("\nLa so hoan thien");
    }
    else
    {
        printf("\nKhong phai so hoan thien");
    }
}

void Nhap()
{
    do
    {
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);
}

int KtHoanThien()
{
    int i = 1;
    int s = 0;

    while(i < n)
    {
        if(n % i == 0)
        {
            s = s + i;
        }

        i = i + 1;
    }

    if(s == n)
    {
        return 1;
    }

    return 0;
}