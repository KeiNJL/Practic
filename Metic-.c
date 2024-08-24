#include <stdio.h>
#include "35.h"

int main()
{

    int quitting = FALSE;

    printf ("Dobro pozhalovat v Metric\n");
    while (!quitting)
    {
        DisplayMenu();
        switch (MenuSelection())
        {
        case 1:
            InchesToCentimeters();
            break;
        case 9:
            quitting = TRUE;
            break;
        default:
            printf("\nOshibka vibora!\n");
        }
    }
    return 0; 
}

void DisplayMenu()
{
    printf("\nMenu\n");
    printf("------\n");
    printf("1 - Inches v sm\n");
    printf("2 - Sm v inches\n");
    printf("3 - Feet v metri\n");
    printf("4 - Metri v feet\n");
    printf("5 - Mili v killometri\n");
    printf("6 - Killometri v mili\n");
    printf("9 - Quit\n");
}

int MenuSelection()
{
    printf("\nVibor? (not Enter): ");
    return (getche() - '0');
}

double GetValue()
{
    double value;

    printf("\n Znachenit dlya perevoda? ");
    scanf("lf", &value);
    return value;
}

void InchesToCentimeters()
{
    double value;
    double result;

    printf("\nInches to Centimeters\n");
    value = GetValue();
    result = value * CENT_PER_INCH;
    printf("%.31f inches = %.31f cents\n", value, result);
}