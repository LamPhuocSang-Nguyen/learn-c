//0018

#include <stdio.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
int Ismax(int n, int a[100]);
void Enumerate(int n, int a[100]); //Liet ke

int main(void)
{
    int a[100];
    int n;

    InputElement(&n,a);
    OutputElement(n,a);
    Enumerate(n,a);
    return 0;
}

void InputElement(int *n, int a[100])
{
    printf("\nEnter n = ");
    scanf("%d", &(*n));

    for(int i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void OutputElement(int n, int a[100])
{
    for(int i = 0; i < n; i++)
        printf("\ta[%d] = %d", i, a[i]);
}

int Ismax(int n, int a[100])
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

void Enumerate(int n, int a[100])
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