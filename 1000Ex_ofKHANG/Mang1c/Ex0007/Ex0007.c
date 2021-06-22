//$$0028

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputElement(int *n, float a[100]);
void OutputElement(int n, float a[100]);
float FirtPositiveNumber(int n, float a[100]);
float SmallestPositiveNumber(int n, float a[100]);
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
    printf("Enter n");
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
        printf("a[%d] = %.2f \t", i, a[i]);
    }
    printf("\n");
}

float FirtPositiveNumber(int n, float a[100])
{
    for(int i = 0; i < n; i++)
        if(a[i] > 0)
            return a[i];

    return -1;
}

float SmallestPositiveNumber(int n, float a[100])
{
    float lc = FirtPositiveNumber(n, a);

    if(lc == -1)
    {
        return -1;
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] < lc && a[i] > 0)
        {
            lc = a[i];
        }
    }
    return lc;
}

void Enumerate(int n, float a[100])
{
    float lc = SmallestPositiveNumber(n,a);

    if(lc == -1)
    {
        printf("\nArray is not positive Number");
        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == lc)
        {
            printf("\t%d", i);
        }
    }
}