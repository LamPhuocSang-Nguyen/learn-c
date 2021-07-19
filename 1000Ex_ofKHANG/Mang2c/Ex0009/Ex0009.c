//0092

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


void InputElement(int* m, int* n, int a[][MAX]);
void OutputElement(int m, int n, int a[][MAX]);
int CountRow();
int MaxCountRow();
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

int MaxCountRow(int m, int n, int a[][MAX])
{
    
}

void Enumerate(int m, int n, int a[][MAX])
{
    int lc = MaxCountRow(m,n,a);
}