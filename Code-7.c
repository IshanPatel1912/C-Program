#include <stdio.h>
#include <math.h>
int main()
{
    double a,intmin;
    printf("Enter the minitues:\n");
    scanf("%lf",&intmin);
    a=intmin/60;
    printf("Total Hours: %.3f\n",a);
    getch();
}

