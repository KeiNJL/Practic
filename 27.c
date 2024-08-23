#include <stdio.h>

int counter = 10;

void main()
{
    while (counter > 1)
    {
        printf("%d\n", counter);
        counter--;
    }
    printf("Itogo: %d\n", counter);
}