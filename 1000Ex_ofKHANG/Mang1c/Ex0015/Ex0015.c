//$$0102

#include <stdio.h>

void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);
int isNumberFinish(int b);
int IsFirstNumberfinish(int n, int a[n]);
void Enumerate(int n, int a[n]);

int main()
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

int IsNumberFinish(int b)
{
    int S = 0;

    for(int i = 0; i < b; i++)
    {
        if(b % i == 0)
        {
            S = S + i;
        }
    }

    if(S == b)
    {
        return 1;
    }

    return 0;
}

int IsFirstNumberFinish(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        if(IsNumberFinish(a[i]))
        {
            return a[i];
        }
    }
    return -1;
}

void Enumerate(int n, int a[n])
{
    int lc = IsFirstNumberFinish(n,a);

    if(lc == -1)
    {
        printf("array has not the number of finishes");
        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(IsNumberFinish(a[i]) && a[i] < lc)
        {
            lc = a[i];
        }
    }

    printf("The number of finishes is %d", lc);
}