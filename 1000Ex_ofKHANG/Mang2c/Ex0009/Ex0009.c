//0092

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


void InputElement(int* m, int* n, int a[][MAX]);
void OutputElement(int m, int n, int a[][MAX]);
int CountRow(int m, int n, int a[][MAX], int d);
int MaxCountRow(int m, int n, int a[][MAX]);
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

int CountRow(int m, int n, int a[][MAX], int d)
{
    int Count = 0;

    for(int j = 0; j < n; j++)
    {
        if(a[d][j] % 2 == 0)
        {
            Count++;
        }
    }

    return Count;
}

int MaxCountRow(int m, int n, int a[][MAX])
{
    int Max = CountRow(m,n,a,0);

    for(int i = 0; i < m; i++)
    {
        if(CountRow(m,n,a,i) > Max)
        {
            Max = CountRow(m,n,a,i);
        }
    }

    return Max;
}

void Enumerate(int m, int n, int a[][MAX])
{
    int lc = MaxCountRow(m,n,a);

    for(int i = 0; i < m; i++)
    {
        if(CountRow(m,n,a,i) == lc)
        {
            printf("%4d ", i);
        }
    }
}