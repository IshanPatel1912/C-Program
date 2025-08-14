#include <stdio.h>
#include <math.h>
int main()
{
    double f,c;
    printf("Enter the Celcius:\n");
    scanf("%lf",&c);
    f=32+9*c/5;
    printf("Fahrenheit= %.3f",f);
    getch();
}

