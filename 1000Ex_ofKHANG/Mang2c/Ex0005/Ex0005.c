//&&0052

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void InputElement(int* m, int* n, float a[][MAX]);
void OutputElement(int m, int n, float a[][MAX]);
int CheckMaxima(int m, int n, int d, int c, float a[][MAX]);
int CheckMinima(int m, int n, int d, int c, float a[][MAX]);
float SumOfMaxima(int m, int n, float a[][MAX]);
float SumOfMinima(int m, int n, float a[][MAX]);
float SumOfExtremun(int m, int n, float a[][MAX]);

int main(void)
{
    int m;
    int n;
    float a[MAX][MAX];

    InputElement(&m,&n,a);
    OutputElement(m,n,a);
    printf("Sum of Extremun is %f", SumOfExtremun(m,n,a));
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

    srand(time(NULL));

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
    int di[8] = {-1,-1,-1,0,1,1,1,0};
    int dj[8] = {-1,0,1,1,1,0,-1,-1};
    int flag = 1;

    for(int i = 0; i < 8; i++)
    {
        if(d + di[i] >= 0 && d + di[i] < m && 
           c + dj[i] >= 0 && c + dj[i] < n &&
           a[d + di[i]][c + dj[i]] > a[d][c])
           {
               flag = 0;
           }
    }

    return flag;
}

int CheckMinima(int m, int n, int d, int c, float a[][MAX])
{
    int di[8] = {-1,-1,-1,0,1,1,1,0};
    int dj[8] = {-1,0,1,1,1,0,-1,-1};
    int flag = 1;

    for(int i = 0; i < 8; i++)
    {
        if(d + di[i] >= 0 && d + di[i] < m && 
           c + dj[i] >= 0 && c + dj[i] < n &&
           a[d + di[i]][c + dj[i]] < a[d][c])
           {
               flag = 0;
           }
    }

    return flag;
}

float SumOfMaxima(int m, int n, float a[][MAX])
{
    float s = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(CheckMaxima(m,n,i,j,a))
            {
                s = s + a[i][j];
            }
        }
    }

    return s;
}

float SumOfMinima(int m, int n, float a[][MAX])
{
    float s = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(CheckMinima(m,n,i,j,a))
            {
                s = s + a[i][j];
            }
        }
    }
    return s;
}

float SumOfExtremun(int m, int n, float a[][MAX])
{
    return (SumOfMaxima(m,n,a) + SumOfMinima(m,n,a));
}