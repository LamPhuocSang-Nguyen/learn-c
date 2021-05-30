//0134

#include <stdio.h>

void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);
int IsPrime(int a);
void Enumerate(int n, int *m, int a[n], int b[*m]);


int main()
{
    int n;
    int m = 0;
    int a[100];
    int b[100];

    InputElement(&n,a);
    OutputElement(n,a);
    Enumerate(n,&m,a,b);
    OutputElement(m,b);

    return 0;
}

void InputElement(int *n, int a[*n])
{
    printf("\nEnter the number of element: ");
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
    {
        printf("\ta[%d] = %d", i, a[i]);
    }
    printf("\n");
}

int IsPrime(int a)
{
    int Count = 0;

    if(a < 2)
    {
        return 0;
    }

    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            Count++;
        }
    }

    if(Count == 2)
    {
        return 1;
    }

    return 0;
}


void Enumerate(int n, int *m, int a[n], int b[*m])
{
    for(int i = 0; i < n; i++)
    {
        if(IsPrime(a[i]))
        {
            b[(*m)++] = a[i];
        }
    }
}
