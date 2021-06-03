//&& 0137

#include <stdio.h>

void InputElement(int *n, int a[*n]);
void OutputElement(int n, int a[n]);
void Swap(int *a, int *b);
void Arrange(int n, int a[n]);


int main(void)
{
    int a[100];
    int n;

    InputElement(&n,a); 
    OutputElement(n,a);
    Arrange(n,a);
    OutputElement(n,a);

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

void Swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void Arrange(int n, int a[n])
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                Swap(&a[i], &a[j]);
            }
        }
    }
}
