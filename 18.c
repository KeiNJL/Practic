#include <stdio.h>
#include <math.h>

// #define M_PI

const double PI = 3.14159;

void main()
{
    double r, s, l;
    printf("\nVvedite radius: ");
    scanf("%lf", &r);
    s = PI * r * r;
    l = 2 * PI * r;
    printf("\nPloschad = %lf\nOkruzhnost = %lf",s,l);
}