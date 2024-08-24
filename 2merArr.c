#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLS 8

void FillArray(int data[][COLS], int numRows);
void DisplayTable(int data[][COLS], int numRows);

int data1[7][COLS];
int data2[4][COLS];

int main()
{
    rand();
    FillArray(data1, 7);
    DisplayTable(data1, 7);
    FillArray(data2, 4);
    DisplayTable(data2, 4);
    return 0;
}

void FillArray(int data[][COLS], int numRows)
{
    int r, c;

    for (r = 0; r < numRows; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            data[r][c] = rand();
        }
    }
}

void DisplayTable(int data[][COLS], int numRows)
{
    int r, c;

    for (r = 0; r < numRows; r++)
    {
        printf("\n");
        for (c = 0; c < COLS; c++)
        {
            printf("% 8d", data[r][c]);
        }
    }
    printf("\n");
}
