#include <stdio.h>
#include <conio.h>

void Pause(void);
void Function1(void); // можно удалить но будут варнинги
void Function2(void);

int main()
{
    Function1();
    return 0;
}

void Pause(void)
{
    printf("Press <Spacebar> to continue...");
    while (getch() != ' ')
        ;
}

void Function1(void)
{
    char s[15] = "Grodno\n";
    printf("\nBegin function #1. s = %s", s);
    Pause();
    Function2(); /* вызов Function2 из Function1 */
    printf("\nBack in function #1. s = %s", s);
}

void Function2(void)
{
    char s[15] = "Brest\n";
    printf("\nBegin function #2. s = %s", s);
    Pause();
}