#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


void InputElement(int* m, int* n, float a[][MAX]);
void OutputElement(int m, int n, float a[][MAX]);
void Swap(float* a, float* b);
void ConversionColumn(int m, int n, float a[][MAX]);

int main(void)
{
    float a[MAX][MAX];
    int m;
    int n;

    InputElement(&m,&n,a);

    OutputElement(m,n,a);

    ConversionColumn(m,n,a);

    OutputElement(m,n,a);

    return 0;
}

void InputElement(int* m, int* n, float a[][MAX])
{
    printf("\nEnter row: ");
    scanf("%d", m);

    printf("\nEnter column: ");
    scanf("%d", n);

    srand((time(NULL)));

    for(int i = 0; i < *m; i++)
    {
        for(int j = 0; j < *n; j++)
        {
            a[i][j] = (rand() * (100 + 100) - 100);
        }
    }
}

void OutputElement(int m, int n, float a[][MAX])
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

void Swap(float* a, float* b)
{
    float temp = *a;

    *a = *b;

    *b = temp;
}

void ConversionColumn(int m, int n, float a[][MAX])
{
    int col1;
    int col2;

    printf("\nEnter column first: ");
    scanf("%d", &col1);

    printf("\nEnter column second: ");
    scanf("%d", &col2);

    for(int i = 0; i < m; i++)
    {
        Swap(&a[i][col1], &a[i][col2]);
    }
}