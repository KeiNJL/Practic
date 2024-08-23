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


// 1: #include <stdio.h>
// 2:
// 3: main()
// 4: {
// 5: char c;
// 6:
// 7: for (c = 32; c < 128; c++) {
// 8: if ((c % 32) == 0) printf(″\n″);
// 9: printf(″%c″, c);
// 10: }
// 11: printf(″\n″);
// 12: return 0;
// 13: } 