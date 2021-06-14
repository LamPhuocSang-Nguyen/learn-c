//&0169
#include <stdio.h>


void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);


int main()
{
    int n;
    int a[100];

    InputElement(&n,a);
    OutputElement(n,a);

    return 1;
}

void InputElement(int *n, int a[*n])
{
    int j;
    do
    {
        printf("Enter n = ");
        scanf("%d", &(*n));
    } while (*n < 0);
    
    for(int i = 0; i < *n; i++)
    {
        int x;
        printf("a[%d] = ", i);
        scanf("%d", &x);
        for(j = i - 1; j > -1 && x > a[j]; j--)
        {
            a[j + 1] = a[j];
        }

        a[j + 1] = x;
    }
}

void OutputElement(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        printf("%d", a[i]);
    }
}