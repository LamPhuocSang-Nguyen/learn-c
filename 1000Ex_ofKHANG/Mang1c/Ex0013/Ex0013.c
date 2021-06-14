//$$0070

#include <stdio.h>

void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);
int Frequency(int b, int n, int a[n]);
int CheckTheSame(int b, int n, int a[n]);
void Enumerate(int n, int a[n], int m, int b[m]);

int main()
{
    int a[100];
    int b[100];
    int n;
    int m;

    InputElement(&n,a); 
    InputElement(&m,b);
    OutputElement(n,a);
    OutputElement(m,b);
    Enumerate(n,a,m,b);

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
    printf("\n");
}

int Frequency(int b, int n, int a[n])
{
    int Count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == b)
        {
            Count++;
        }
    }
    return Count;
}

int CheckTheSame(int b, int n, int a[n])
{
    int Count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == b)
        {
            Count++;
        }
    }

    if(Count == 1)
    {
        return 1;
    }

    return 0;
}

void Enumerate(int n, int a[n], int m, int b[m])
{
    for(int i = 0; i < n; i++)
    {
        if(CheckTheSame(a[i],n,a) && Frequency(a[i],m,b) == 0)
        {
            printf("\t%d", a[i]);
        }
    }

     for(int i = 0; i < m; i++)
    {
        if(CheckTheSame(b[i],m,b) && Frequency(b[i],n,a) == 0)
        {
            printf("\t%d", b[i]);
        }
    }
}