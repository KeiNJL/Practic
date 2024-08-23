#include <stdio.h>
#include <ctype.h>

#define FALSE 0
#define TRUE 1

int UserQuits(void);

int main ()
{
    int i = 0;
    int quitting = FALSE;

    printf("\nQuit example\n");
    while (!quitting)
    {
        i++;
        printf("i = %d\n", i);
        quitting = UserQuits();
    }
    return 0;
}

int UserQuits()
{
    char c;
    printf("Another value? (y/n)");
    do
    {
        c = toupper(getchar());
    } while ((c != 'Y') && (c != 'N'));     //почему && так и не понял ???
    return (c == 'N');                      //возвращает по факту булевую переменную 1 или 0 что влияет на строку 19
}