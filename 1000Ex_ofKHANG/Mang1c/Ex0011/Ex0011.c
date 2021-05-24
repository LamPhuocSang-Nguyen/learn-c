//0066

#include <stdio.h>

void InputElement(void);
void OutputElement(void);
int isPrime(int a);
int CountPrime(void);
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

int isPrime(int a)
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

int CountPrime(void)
{
    int Count = 0;

    for(int i = 0; i < n; i++)
    {
        int flag = 0;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 1;
            }
        }
        if(flag == 0 && isPrime(arr[i]))
        {
            Count++;
        }
    }
    return Count;
}

void Enumerate(void)
{
    int result = CountPrime();

    printf("\nThe number of prime is %d", result);
}