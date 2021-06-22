//&& 0111

#include <stdio.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
int FirstOddNumber(int n, int a[100]);
int LowestOddNumber(int n, int a[100]);
int FindEvenNumber(int n, int a[100]);
void Enumerate(int n, int a[100]);


int main(void)
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

int FirstOddNumber(int n, int a[100])
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            return a[i];
        }
    }
    return -1;
}

int LowestOddNumber(int n, int a[100])
{
    int lc = FirstOddNumber(n,a);

    if(lc == -1)
    {
        return -1;
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] < lc && a[i] % 2 != 0)
        {
            lc = a[i];
        } 
    }

    return lc;
}

int FindEvenNumber(int n, int a[100])
{
    int Value = LowestOddNumber(n,a);

    if(Value == -1)
    {
        return -1;
    }

    return Value - 1;
}

void Enumerate(int n, int a[100])
{
    int Value = FindEvenNumber(n,a);

    if(Value == -1)
    {
        printf("Array has not odd number");
        return;
    }

    printf("\nThe tallest even number and smaller than all odd number in array is %d", Value);
}