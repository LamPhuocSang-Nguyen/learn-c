//&&0066

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


void InputElement(int* m, int* n, int a[][MAX]);
void OutputElement(int m, int n, int a[][MAX]);
int Count(int m, int n, int a[][MAX]);

int main(void)
{
    int a[MAX][MAX];
    int m;
    int n;

    InputElement(&m, &n, a);
    OutputElement(m,n,a);
    printf("Count = %d", Count(m,n,a));

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

int Count(int m, int n, int a[][MAX])
{
    int S = 0;

    for(int j = 0; j < n; j++)
    {
        if(a[0][j] > 0)
        {
            S++;
        }
    }

    for(int i = 1; i < m; i++)
    {
        
        if(a[i][n - 1] > 0)
        {
            S++;
        }
    }

    for(int j = n - 2; j > -1; j--)
    {
       
        if(a[0][j] > 0)
        {
            S++;
        }
    }

    for(int i = m - 2; i > 0; i--)
    {
        
        if(a[i][0] > 0)
        {
            S++;
        }
    }

    return S;
}