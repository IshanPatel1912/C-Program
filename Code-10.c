#include <stdio.h>
#include <math.h>
int main()
{
    double Rs,dollar,pound;
    printf("Enter the Dollar:\n");
    scanf("%lf",&dollar);
    Rs=dollar*48;
    pound=Rs/70;
    printf("Pound= %.3f\n",pound);
    getch();
}

