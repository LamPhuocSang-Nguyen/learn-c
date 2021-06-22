//&& 0164

#include <stdio.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
int IsPrime(int a);
void DeletePos(int* n, int k, int a[100]);
void DeletePrime(int* n, int a[100]);


int main(void)
{
    int a[100];
    int n;

    InputElement(&n,a); 
    OutputElement(n,a);
    DeletePrime(&n,a);
    OutputElement(n,a);


    return 0;
}

void InputElement(int *n, int a[100])
{
    printf("\nEnter the number of element: ");
    scanf("%d", &(*n));

    for(int i = 0; i < *n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &(a[i]));
    }
}

void OutputElement(int n, int a[100])
{
    for(int i = 0; i < n; i++)
    {
        printf("\ta[%d] = %d", i, a[i]);
    }
}


int IsPrime(int a)
{
    int Count = 0;

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

void DeletePos(int* n, int k, int a[100])
{
    for(int i = k; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}

void DeletePrime(int* n, int a[100])
{
    for(int i = *n - 1; i >= 0; i--)
    {
        if(IsPrime(a[i]))
        {
            DeletePos(n,i,a);
        }
    }
}


