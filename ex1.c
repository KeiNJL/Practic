#include <stdio.h>

double Factorial(int);

int number = 5;

void main()
{
    Factorial(number);
}

double Factorial(int number)
{
    printf("%d\n", number);
    if (number > 1)
    {
        return number * Factorial(number-1);
        printf("%d\n", number);
    }
    printf("%d\n", number);
    return 1;
}