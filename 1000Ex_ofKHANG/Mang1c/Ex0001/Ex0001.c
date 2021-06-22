//$$0001

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[n]);

int main()
{
    int a[100];
    int n;

    InputElement(&n,a);
    OutputElement(n, a);

    exit(EXIT_SUCCESS);     //the same as return in c and need to include stdlib.h
}

void InputElement(int *n, int a[100])
{

    printf("\nEnter n: ");
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
        printf("a[%d] = %d\t", i, a[i]);
    }
}