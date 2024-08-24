#include <stdio.h>

#define MAX_ARR 10

void Inicilize();
int SumOfArr(int[]);

int arr[MAX_ARR];

void main()
{
    Inicilize();
    int result = SumOfArr(arr);
    printf("\nSumma = %d", result);
}

void Inicilize()
{
    for (int i = 0; i < MAX_ARR; i++)
    {
        printf("Vveditr chislo: \n");
        scanf("%d", &arr[i]);
    }
}

int SumOfArr(int data[])
{
    int sum = 0;
    for (int i = 0; i < MAX_ARR; i++)
    {
        sum += data[i];
    }
    return sum;
}