//$$146

#include <stdio.h>

int n;
void Nhap();
void XuLy();
int DaoNguoc();

int main()
{
    Nhap();
    XuLy();

    return 0;
}

void Nhap()
{
    printf("\nIn ra so dao nguoc");

    do
    {
        printf("\nNhap so nguyen duong n: ");
        scanf("%d",&n);
    } while (n <= 0);
}

int DaoNguoc()
{
    int dn = 0;
    int dv;

    for(int t = n; t != 0; t = t / 10)
    {
        dv = t % 10;
        dn = dn * 10 + dv;
    }

    return dn;
}

void XuLy()
{
    int kq = DaoNguoc();

    if(kq == n)
    {
        printf("\nSo sau khi dao nguoc la: %d", kq);
    }
    else
    {
        printf("So khong dao nguoc duoc");
    }
}