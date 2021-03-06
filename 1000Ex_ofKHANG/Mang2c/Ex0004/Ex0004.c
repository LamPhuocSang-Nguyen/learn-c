//&&0050

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void InputElement(int* m, int* n, float a[][MAX]);
void OutputElement(int m, int n, float a[][MAX]);
int CheckMaxima(int m, int n, int d, int c, float a[][MAX]);
float SumMaxima(int m, int n, float a[][MAX]);
void Enumerate(int m, int n, float a[][MAX]);


int main(void)
{
    float a[MAX][MAX];
    int m;
    int n;

    InputElement(&m,&n,a);
    OutputElement(m,n,a);
    Enumerate(m,n,a);

    return 0;
}

void InputElement(int* m, int* n, float a[][MAX])
{
    do
    {
        printf("Enter m = ");
        scanf("%d", &(*m));
    } while (*m < 0);

    do
    {
        printf("Enter n = ");
        scanf("%d", &(*n));
    } while (*n < 0);

    srand((time(NULL)));

    for(int i = 0; i < *m; i++)
    {
        for(int j = 0; j < *n; j++)
        {
             a[i][j] = (rand() / (RAND_MAX / (100.0 - (-100.0))));
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
            printf("%f", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

int CheckMaxima(int m, int n, int d, int c, float a[][MAX])
{
    int flag = 1;
    int di[8] = {-1,-1,-1,0,1,1,1,0};
    int dj[8] = {-1,0,1,1,1,0,-1,-1};

    for(int i = 0; i < 8; i++)
    { 
        if(d + di[i] >= 0 && d + di[i] < m &&
        c + dj[i] >= 0 && c + dj[i] < n &&
        a[(d + di[i])][(c + dj[i])] > a[d][c])
        {
            flag = 0;
        }
    }

    return flag;

}

float SumMaxima(int m, int n, float a[][MAX])
{
    float S = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(CheckMaxima(m,n,i,j,a))
            {
                S = S + a[i][j];
            }
        }
    }

    return S;
}

void Enumerate(int m, int n, float a[][MAX])
{
    printf("Sum of elements maxima is: %f", SumMaxima(m,n,a));
}