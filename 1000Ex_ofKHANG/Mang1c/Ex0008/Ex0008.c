//0044

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void InputElement(void);
void OutputElement(void);
int SumOfMaxima(void);
int SumOfMinima(void);
void Sum(void);

int n;
int arr[100];


int main(void)
{
    InputElement();
    OutputElement();
    Sum();

    return 0;
}

void InputElement(void)
{
    printf("\nEnter the number of element: ");
    scanf("%d", &n);

    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % (200 + 1) - 100;
    }
}

void OutputElement(void)
{
    for(int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
}

int SumOfMaxima(void)
{
    int S = 0;

    if(n <= 1)
    {
        return 0;
    }

    if(arr[0] > arr[1])
    {
        S = S + arr[0];
    }

    for(int i = 1; i < n - 1; i++)
    {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            S = S + arr[i];
        }
    }

    if(arr[n - 1] > arr[n - 2])
    {
        S = S + arr[n - 1];
    }

    return S;
}

int SumOfMinima(void)
{
    int S = 0;

    if(n <= 0)
    {
        return 0;
    }

    if(arr[0] < arr[1])
    {
        S = S + arr[0];
    }

    for(int i = 1; i < n - 1; i++)
    {
        if(arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            S = S + arr[i];
        }
    }

    if(arr[n - 1] < arr[n - 1])
    {
        S = S + arr[n - 1];
    }

    return S;
}

void Sum(void)
{
    int S1 = SumOfMaxima();
    int S2 = SumOfMinima();

    int S = S1 + S2;

    printf("result = %d", S);
}