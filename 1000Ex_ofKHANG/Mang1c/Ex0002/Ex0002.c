#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputElement(int *n, float a[*n]);
void OutputElement(int n, float a[n]);

int main()
{
    float a[100];
    int n;

    InputElement(&n,a);
    OutputElement(n,a);

    exit(EXIT_SUCCESS);
}

void InputElement(int *n, float a[*n])
{
    printf("Enter n");
    scanf("%d", &(*n));

    srand(time(NULL));

    for(int i = 0; i < *n; i++)
    {
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
    }
}

void OutputElement(int n, float a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %.2f \t", i, a[i]);
    }
}