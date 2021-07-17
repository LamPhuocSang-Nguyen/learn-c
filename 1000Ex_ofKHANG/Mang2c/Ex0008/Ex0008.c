//0084

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


void InputElement(int* m, int* n, int a[][MAX]);
void OutputElement(int m, int n, int a[][MAX]);
int PrimeNumber(int x);
int FirstPrimeNumber(int m, int n, int a[][MAX]);
int LargestPrimeNumber(int m, int n, int a[][MAX]);

int main(void)
{
    int a[MAX][MAX];
    int m;
    int n;

    InputElement(&m, &n, a);
    OutputElement(m,n,a);
    printf("Prime of number is = %d", LargestPrimeNumber(m,n,a));

    return 0;
}

void InputElement(int* m, int* n, int a[][MAX])
{
    printf("\nEnter m: ");
    scanf("%d", &(*m));

    printf("\nEnter n: ");
    scanf("%d", &(*n));

    srand((time(NULL)));

    for(int i = 0; i < *m; i++)
    {
        for(int j = 0; j < *n; j++)
        {
             a[i][j] = rand();
        }
    }
}

void OutputElement(int m, int n, int a[][MAX])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

int PrimeNumber(int x)
{
    int Dem = 0;

    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            Dem++;
        }
    }

    if(Dem == 2)
    {
        return 1;
    }

    return 0;
}
int FirstPrimeNumber(int m, int n, int a[][MAX])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(PrimeNumber(a[i][j]))
            {
                return a[i][j];
            }
        }
    }

    return 0;
}
int LargestPrimeNumber(int m, int n, int a[][MAX])
{
    int max = FirstPrimeNumber(m,n,a);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(PrimeNumber(a[i][j]) && a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    return max;
}