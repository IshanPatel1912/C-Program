#include <stdio.h>
#include <math.h>
int main()
{
    double f,c;
    printf("Enter the Fahrenheit:\n");
    scanf("%lf",&f);
    c=5*(f-32)/9;
    printf("Celcius= %.3f",c);
    getch();
}


