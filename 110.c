#include <stdio.h>

void main()
{
    int c; // or char

    printf ("\nVvedite c\n");
    c = getchar();

    printf("Znachenie v simvolax = %c\n",c);
    printf("Znachenie v 10 = %d\n",c);
    printf("Znachenie v 16 = %#x\n",c);
}