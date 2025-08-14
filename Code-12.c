#include <stdio.h>
#include <math.h>
int main()
{
    double gm,kg;
    printf("Enter the Kilograms:\n");
    scanf("%lf",&kg);
    gm=kg*1000;
    printf("Grams= %.1f",gm);
    getch();
}
