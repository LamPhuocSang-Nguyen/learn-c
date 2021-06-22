//$$0023
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
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
    printf("Enter the number of element: ");
    scanf("%d", &(*n));

    srand(time(NULL));

    for(int i = 0; i < *n; i++)
    {
        a[i] = rand() % (200 + 1) - 100;
    }
}

void OutputElement(int n, int a[100])
{
    for(int i = 0; i < n; i++)
    {
        printf("\ta[%d] = %d", i, a[i]);
    }
    printf("\n");
}

void Enumerate(int n, int a[100])
{
    if(n <= 1)
    {
        return;
    }

    if(a[0] % 2 == 0 && a[1] % 2 == 0)
    {
        printf("\t%d", a[0]);
    }

    for(int i = 1; i < n - 1; i++)
    {
        if(a[i] % 2 == 0)
        {
            if(a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
            {
                printf("\t%d", a[i]);
            }
        }
    }

    if(a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
    {
        printf("\t%d", a[n - 1]);
    }
}