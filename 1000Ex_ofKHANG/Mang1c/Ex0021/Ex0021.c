//&& 0141

#include <stdio.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
void Swap(int *a, int *b);
int IsFinishNumber(int a);
void Arrange(int n, int a[100]);


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

int IsFinishNumber(int a)
{
    int S = 0;

    for(int i = 1; i < a; i++)
    {
        if(a % i == 0)
        {
            S = S + i;
        }
    }

    if(S == a)
    {
        return 1;
    }

    return 0;
}

void Swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void Arrange(int n, int a[100])
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(IsFinishNumber(a[i]) && IsFinishNumber(a[j]) && a[i] < a[j])
            {
                Swap(&a[i], &a[j]);
            }
        }
    }
}
