//&&0123

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void InputElement(int* m, int* n, int a[][MAX]);
void OutputElement(int m, int n, int a[][MAX]);
void  Conversion(int m, int n, int a[][MAX]);
void Swap(int* a, int* b);

int main(void)
{
    int a[MAX][MAX];
    int m;
    int n;

    InputElement(&m,&n,a);

    OutputElement(m,n,a);

    Conversion(m,n,a);

    OutputElement(m,n,a);

    return 0;
}

void InputElement(int* m, int* n, int a[][MAX])
{
    printf("Enter the number of row: ");
    scanf("%d", m);

    printf("Enter the number of column: ");
    scanf("%d", n);

    srand((time(NULL)));

    for(int i = 0; i < *m; i++)
    {
        for(int j = 0; j < *n; j++)
        {
            a[i][j] = rand() % (100 + 100) - 100;
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
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

}

void Swap(int* a, int* b)
{
    int temp = *a;

    *a = *b;

    *b = temp;
}

void Conversion(int m, int n, int a[][MAX])
{
    int d;

    printf("Enter row you want: ");

    scanf("%d", &d);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[d][i] > a[d][j])
            {
                Swap(&a[d][i], &a[d][j]);
            }
        }
    }
}