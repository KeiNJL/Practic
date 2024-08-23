#include <stdio.h>

void Initcilazie();
int CountUp(int, int);
int CountDown(int, int);

int max;
int min;
int value1;
int value2;

void main()
{
    Initcilazie();
    CountUp(value2, value1);
    Initcilazie();
    CountDown(value1, value2);
}

void Initcilazie()
{
    printf("\n Vvedite max chislo\n");
    scanf("%d", &value1);
    printf("\n Vvedite min chislo\n");
    scanf("%d", &value2);
}

int CountUp(int min, int max)
{
    for(int i = min; i <= max; i++)
    {
        printf("\n%d", i);
    }
}

int CountDown(int max, int min)
{
    for(int i = max; i >= min; i--)
    {
        printf("\n%d", i);
    }
    return 0;
}