//0018

#include <stdio.h>

void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);
int Ismax(int n, int a[n]);
void Enumerate(int n, int a[n]); //Liet ke

int main(void)
{
    int a[100];
    int n;

    InputElement(&n,a);
    OutputElement(n,a);
    Enumerate(n,a);
    return 0;
}

void InputElement(int *n, int a[*n])
{
    printf("\nEnter n = ");
    scanf("%d", &(*n));

    for(int i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void OutputElement(int n, int a[n])
{
    for(int i = 0; i < n; i++)
        printf("\ta[%d] = %d", i, a[i]);
}

int Ismax(int n, int a[n])
{
    int lc;

    lc = a[0];

    for(int i = 0; i < n; i++)
    {
        if(a[i] > lc)
        {
            lc = a[i];
        }
    }

    return lc;
}

void Enumerate(int n, int a[n])
{
    int resutl = Ismax(n,a);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == resutl)
        {
            printf("\n%d", i);
        }
    }
}