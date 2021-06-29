//&&0021

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


void InputElement(int* m, int* n, int a[][MAX]);
void OutputElement(int m, int n, int a[][MAX]);
void Enumerate(int m, int n, int a[][MAX]);

int main(void)
{
    int a[MAX][MAX];
    int m;
    int n;

    InputElement(&m, &n, a);
    OutputElement(m,n,a);
    Enumerate(m,n,a);

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

void Enumerate(int m, int n, int a[][MAX])
{
    for(int j = 0; j < n; j++)
    {
        printf("\t%d", a[0][j]);
    }

    for(int i = 1; i < m; i++)
    {
        printf("\t%d", a[i][n - 1]);
    }

    for(int j = n - 2; j > -1; j--)
    {
        printf("\t%d", a[m - 1][j]);
    }

    for(int i = m - 2; i > 0; i--)
    {
        printf("\t%d", a[i][0]);
    }
}