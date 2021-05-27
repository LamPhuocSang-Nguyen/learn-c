//0101

#include <stdio.h>

void InputElement(void);
void OutputElement(void);
int IsPrime(int a);
int IsFirstPrime();
void Enumerate(void);

int arr[100];
int n;

int main()
{
    InputElement();
    OutputElement();
    Enumerate();

    return 0;
}

void InputElement(void)
{
    printf("\nEnter the number of element: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void OutputElement(void)
{
    for(int i = 0; i < n; i++)
    {
        printf("\ta[%d] = %d", i, arr[i]);
    }
    printf("\n");
}

int IsPrime(int a)
{
    int Count = 0;

    if(a < 2)
    {
        return 0;
    }

    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            Count++;
        }
    }

    if(Count == 2)
    {
        return 1;
    }

    return 0;
}

int IsFirstPrime()
{

    for(int i = 0; i < n; i++)
    {
        if(IsPrime(arr[i]))
        {
            return arr[i];
        }
    }
    return 0;
}

void Enumerate(void)
{
    int lc = IsFirstPrime();

    if(lc == 0)
    {
        printf("Array has not prime number");
        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(IsPrime(arr[i]) && arr[i] > lc)
        {
            lc = arr[i];
        }
    }

    printf("Largest element number is %d", lc);
}