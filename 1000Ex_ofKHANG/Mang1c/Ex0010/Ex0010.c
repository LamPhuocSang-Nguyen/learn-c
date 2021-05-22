//0063

#include <stdio.h>


void InputElement(void);
void OutputElement(void);
int Frequency(int a);
void Enumerate(void);


int n;
int arr[100];


int main(void)
{
    InputElement();
    OutputElement();
    Enumerate();

    return 0;
}

void InputElement(void)
{
    printf("\nEnter the number of element: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void OutputElement(void)
{
    for(int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}

int Frequency(int a)
{
    int Count = 0; 

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            Count++;
        }
    }
    return Count;
}

void Enumerate(void)
{
    for(int i = 0; i < n; i++)
    {
        if(Frequency(arr[i]) == 1)
        {
            printf("%d", arr[i]);
        }
    }
}
