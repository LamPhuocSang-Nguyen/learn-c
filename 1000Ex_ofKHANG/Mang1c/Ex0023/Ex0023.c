//&& 0155

#include <stdio.h>

void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);
void DaoMang(int n, int a[n]);
void DaoChan(int n, int a[n]);


int main(void)
{
    int a[100];
    int n;

    InputElement(&n,a); 
    OutputElement(n,a);
    DaoChan(n,a);
    OutputElement(n,a);


    return 0;
}

void InputElement(int *n, int a[*n])
{
    printf("\nEnter the number of element: ");
    scanf("%d", &(*n));

    for(int i = 0; i < *n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &(a[i]));
    }
}

void OutputElement(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("\ta[%d] = %d", i, a[i]);
    }
}

void DaoMang(int n, int a[n])
{
    int d = 0;
    int c = n - 1;

    while(d < c)
    {
        int Temp = a[d];
        a[d] = a[c];
        a[c] = Temp;
        d++;
        c--;
    }
}

void DaoChan(int n, int a[n])
{
    int b[n];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            b[k++] =  a[i];
        }
    }

    DaoMang(k,b);
    k = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            a[i] = b[k++];
        }
    }

}