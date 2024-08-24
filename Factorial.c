#include <stdio.h>

void Inicialization();
int Proc(int);

int value = 0;

void main ()
{
    Inicialization();
    printf("\nFactorial chisla %d raven: %d",value, Proc(value));
}

void Inicialization()
{
    printf("Vvedite chislo\n");
    scanf("\n%d", &value);
}

int Proc(int endNumber)
{
    int itog = 1;
    for (int i = 1; i != endNumber + 1; i++)
    {
        itog *= i;
    }
    return itog;
}