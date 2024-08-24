#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Initialize(void);
long GetNumThrows(void);
void ThrowDice(long numThrows);
double sqr(double r);
double ChiSquare(long numThrows);
void DisplayResult(long numThrows);

#define MAX 13 /*индексы от 0 до 12; 0 и 1 не используются*/

double count[MAX];
double prob[MAX] = {
    0.0, 0.0, 1.0 / 36, 1.0 / 18, 1.0 / 12, 1.0 / 9, 5.0 / 36,
    1.0 / 6, 5.0 / 36, 1.0 / 9, 1.0 / 12, 1.0 / 18, 1.0 / 36};

int main()
{
    long numThrows;

    printf("\nDice – A random number benchmark\n\n");
    numThrows = GetNumThrows();
    if (numThrows > 0)
    {
        ThrowDice(numThrows);
        DisplayResult(numThrows);
    }
    return 0;
}

long GetNumThrows(void)
{
    long answer;

    printf("How many throws? ");
    scanf("%ld", &answer);
    return answer;
}

void ThrowDice(long numThrows)
{
    long i;
    int k;

    randomize();
    for (i = 1; i <= numThrows; i++)
    {
        k = (1 + random(6)) + (1 + random(6));
        count[k]++;
    }
}

double sqr(double r)
{
    return r * r;
}

double ChiSquare(long numThrows)
{
    double v = 0.0;
    int i;

    for (i = 2; i < MAX; i++)
        v += (sqr(count[i])) / prob[i];
    return ((1.0 / numThrows) * v) - numThrows;
}

void DisplayResult(long numThrows)
{
    int i;

    printf("\n Dice Proba- Expected Actual \n");
    printf(" Value bility Count Count \n");
    printf("========================================\n");
    for (i = 2; i < MAX; i++)
    {
        printf("%5d%10.3lf%12.0lf%10.0lf\n",
               i, prob[i], prob[i] * numThrows, count[i]);
    }
    printf("\nChi square = % lf\n", ChiSquare(numThrows));
}