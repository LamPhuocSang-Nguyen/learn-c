//&& 0151

#include <stdio.h>

void InputElement(int *n, int a[100]);
void OutputElement(int n, int a[100]);
void DividedBy3(int n, int a[100]);


int main(void)
{
    int a[100];
    int n;

    InputElement(&n,a); 
    OutputElement(n,a);
    DividedBy3(n,a);
    OutputElement(n,a);


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

void DividedBy3(int n, int a[100])
{
    int vt = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 3 == 0)
        {
            int Temp = a[i];
            a[vt] = Temp;
            vt++;
        }
    }
}


