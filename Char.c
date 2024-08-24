#include <stdio.h>

char symbol = 'A';

int main()
{
    while (symbol < 'Z')
    {
        printf("%c\n", symbol);
        symbol++;
    }
}