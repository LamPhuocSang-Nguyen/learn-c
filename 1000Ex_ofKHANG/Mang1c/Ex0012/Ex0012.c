//$$0068

#include <stdio.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
int Frequency(int b, int n, int a[100]);
int CheckTheSame(int b, int n, int a[100]);
void Enumerate(int n, int a[100]);

int main()
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

int Frequency(int b, int n, int a[100])
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

int CheckTheSame(int b, int n, int a[100])
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

void Enumerate(int n, int a[100])
{
    for(int i = 0; i < n; i++)
    {
        if(CheckTheSame(a[i], n, a))
        {
            printf("\n%d = %d", a[i], Frequency(a[i], n, a));
        }
    }
}
