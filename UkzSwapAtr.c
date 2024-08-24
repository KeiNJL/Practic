#include <stdio.h>

void PrintValues(void);
void Swap (int *a, int *b);

int a = 1;
int b = 0;

void main()
{
    PrintValues();
    Swap(&a, &b);
    PrintValues();
}

void PrintValues()
{
    printf("\n a = %d and b = %d\n", a , b);
}

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}