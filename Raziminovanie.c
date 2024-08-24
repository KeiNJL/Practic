#include <stdio.h>

char c;

void main()
{
    printf("%c\n", c);
    char *pc;

    pc =&c;
    for (c = 'A'; c <= 'Z'; c++)
    {
        printf("%c ", *pc);    }
    
}