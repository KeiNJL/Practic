#include <stdio.h>
#include <ctype.h>
#include <conio.h>

#define MAXROW 8 /* число строк в таблице */
#define MAXCOL 6 /* число столбцов в таблице */

/* Прототипы функций */

void Initialize(void);
double Cost(double time, double power, double rate);
void PrintTable(void);
int Finished(void);

/* Глобальные переменные */

double startHours;
double hourlyIncrement;
double startWatts;
double wattsIncrement;
double costPerKwh;

main()
{
    do
    {
        Initialize();
        PrintTable();
    } while (!Finished());
    return 0;
}

void Initialize(void)
{
    printf("Cost of electricity\n\n");
    printf("Starting number of hours....? ");
    scanf("%lf", &startHours);
    printf("Hourly increment............? ");
    scanf("%lf", &hourlyIncrement);
    printf("Starting number of KWatts...? ");
    scanf("%lf", &startWatts);
    printf("KWatts increment............? ");
    scanf("%lf", &wattsIncrement);
    printf("Cost per kilowatt hour (KWH)? ");
    scanf("%lf", &costPerKwh);
}

double Cost(double time, double power, double rate)
{
    return (rate * power * time) * 0.001;
}

void PrintTable(void)
{
    int row, col;
    double hours, watts;

    /* Печать верхней строки таблицы */
    printf("\nHrs/KWatts");
    watts = startWatts;
    for (col = 1; col <= MAXCOL; col++)
    {
        printf("%10.0lf", watts);
        watts += wattsIncrement;
    }
    /* Печать строк таблицы */
    hours = startHours;
    for (row = 1; row <= MAXROW; row++)
    {
        printf("\n%7.1lf - ", hours);
        watts = startWatts;
        for (col = 1; col <= MAXCOL; col++)
        {
            printf("%10.2lf", Cost(hours, watts, costPerKwh));
            watts += wattsIncrement;
        }
        hours += hourlyIncrement;
    }
    printf("\nCost of electricity %.2lf per KWH\n", costPerKwh);
}

int Finished(void)
{
    int answer;

    printf("\nAnother table (y/n) ?");
    answer = getch();
    putchar(answer);
    putchar('\n');
    return (toupper(answer) != 'Y');
}