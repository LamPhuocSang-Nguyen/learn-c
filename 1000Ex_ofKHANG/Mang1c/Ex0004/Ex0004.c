//0020

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void InputElement(int *n, float a[100]);
void OutputElement(int n, float a[100]);
void Enumerate(int n, float a[100]);

int main()
{
    float a[100];
    int n;

    InputElement(&n,a);
    OutputElement(n,a);
    Enumerate(n,a);

    return 0;
}

void InputElement(int *n, float a[100])
{
    printf("Enter the number of element: ");
    scanf("%d", &(*n));

    srand(time(NULL));

    for(int i = 0; i < *n; i++)
    {
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
    }
}

void OutputElement(int n, float a[100])
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %.2f", i, a[i]);
    }
}

void Enumerate(int n, float a[100])
{
    if(n == 1)
    {
        return;
    }

    if(a[0] < a[1])
    {
        printf("\t%.2f", a[0]);
    }

    for(int i = 1; i < n - 2; i++)
    {
        if(a[i] < a[i - 1] && a[i] < a[i + 1])
        {
            printf("\t%.2f", a[i]);
        }
    }

    if(a[n - 1] < a[n - 2])
    {
        printf("\t%.2f", a[n - 1]);
    }
}