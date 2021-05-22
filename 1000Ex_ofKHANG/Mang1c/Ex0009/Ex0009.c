//0046

#include <stdio.h>

void InputElement(void);
void OutputElement(void);
int isPrime(int a);
int CountPrime(void);
int SumOfPrime(void);
void AveragePrime(void);

int arr[100];
int n;

int main()
{
    InputElement();
    OutputElement();
    AveragePrime();

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

int CountPrime()
{
    int Count = 0;

    for(int i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
        {
            Count++;
        }
    }

    return Count;
}

int SumOfPrime()
{
    int S = 0;

    for(int  i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
        {
            S = S + arr[i];
        }
    }

    return S;
}

void AveragePrime()
{
    float S = 0;

    S = (float)SumOfPrime() / CountPrime();

    if(S == 0)
    {
        printf("Array dont have prime number");
    }

    else
    {
        printf("Average of prime number is %.2f", S);
    }
}