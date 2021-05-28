//&& 0109

#include <stdio.h>
#include <math.h>

void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);
int GCD(int a, int b);
int LCM(int a, int b);
int FindLCM(int n, int a[n]);
void Enumerate(int n, int a[n]);

int main(void)
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

int GCD(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while(a * b != 0)
    {
        if(a > b)
        {
            a = a- b;
        }
        else
        {
            b = b - a;
        }
    }

    return (a + b);
}

int LCM(int a, int b)
{
    return (abs(a * b) / GCD(a,b));
}

int FindLCM(int n, int a[n])
{
    int lc = a[0];
    for(int i = 0; i < n; i++)
    {
        lc = LCM(lc, a[i]);
    }

    return lc;
}

void Enumerate(int n, int a[n])
{
    int lc = FindLCM(n,a);

    printf("\nLowest common multiple of elemet array is %d", lc);
}