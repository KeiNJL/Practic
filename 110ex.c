#include <stdio.h>

int main()
{
    char name;

    printf("\nKak tebya zovut?\n");
    name = getchar();
    //scanf("%s", name);
    printf("\nPrivet, %c\n", name);
    return 0;
}