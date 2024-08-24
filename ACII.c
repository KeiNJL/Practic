#include <stdio.h>

char symbol = 32;
int counter = 0;

int main()
{
    while (counter <= 128)
    {
        if ((counter % 16) == 0)
        {
            printf("\n");
        }
        printf("%c",symbol);
        symbol++;
        counter++;
    }
}