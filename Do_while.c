#include <stdio.h>

int counter = 0;

int main()
{
    do
    {
        counter++;
        printf("%d\n", counter);
    } while (counter != 10);
    printf("Itogo: %d\n", counter);
}