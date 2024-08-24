#include <stdio.h>
#include <math.h>

double Count(double, double, double); //прописывай прототипы всегда :D

double rate = 21;
double power = 54;
double time = 13;

void main()
{
    double result = Count(rate, power, time);
    printf("Result is %f", result);
}

double Count(double time, double power, double rate)
{
    return (rate * power * time) * 0.12;
}