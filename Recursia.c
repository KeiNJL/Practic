#include <stdio.h>

void Recount (int);

void main()
{
    Recount(10);
}

void Recount (int top)
{
    if (top>1)
    {
        Recount(top-1);
    }
    printf("%4d", top);
}