//&& 0113

#include <stdio.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
int Digits(int n, int a[100]);
int MaxPosition(int m, int b[m]);
void Enumerate(int n, int a[100]);


int main(void)
{
    int a[100];
    int n;

    InputElement(&n,a); 
    OutputElement(n,a);
    Enumerate(n,a);

    return 0;
}

void InputElement(int *n, int a[100])
{
    printf("\nEnter the number of element: ");
    scanf("%d", &(*n));

    for(int i = 0; i < *n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &(a[i]));
    }
}

void OutputElement(int n, int a[100])
{
    for(int i = 0; i < n; i++)
    {
        printf("\ta[%d] = %d", i, a[i]);
    }
}

int Digits(int n, int a[100])
{
    int array[10] = {0};

    for(int i = 0; i < n; i++)
    {
        int t = a[i];

        if(t == 0)
        {
            array[0]++;  
        }

        while(t != 0)
        {
            int dv = t % 10;
            array[dv]++;
            t = t / 10;
        }
    }
    return MaxPosition(10,array);
}

int MaxPosition(int m, int b[m])
{
    int lc = 0;

    for(int i = 0; i < m; i++)
    {
        if(b[i] > b[lc])
        {
            lc = i;
        }
    }

    return lc;
}

void Enumerate(int n, int a[100])
{
    int result = Digits(n,a);

    printf("Result =  %d ", result);
}