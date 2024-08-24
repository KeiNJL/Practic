#include <stdio.h>

int i = 5;
int *p = 0;

void main()
{
    printf("\ni = %d\n", i);
    printf("p = %d", p);
    p = &i;
    printf("\ni = %d\n", i);
    printf("p = %d\n", p);
    printf("%d", *p);
}