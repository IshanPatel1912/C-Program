#include <stdio.h>
#include <math.h>
int main()
{
    double gm,kg;
    printf("Enter the grams:\n");
    scanf("%lf",&gm);
    kg=gm/1000;
    printf("Kg= %.3f",kg);
    getch();
}
