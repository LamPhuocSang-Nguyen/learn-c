//$$0002

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputElement(int *n, float a[100]);
void OutputElement(int n, float a[100]);

int main()
{
    float a[100];
    int n;

    InputElement(&n,a);
    OutputElement(n,a);

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
}