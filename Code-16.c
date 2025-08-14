#include <stdio.h>
#include <math.h>
int main()
{
    double p,r,n,i;
    printf("Enter the Ammount:\n");
    scanf("%lf",&p);
    printf("Enter the rate of interest:\n");
    scanf("%lf",&r);
    printf("Enter the rate of time:\n");
    scanf("%lf",&n);
    i=p*r*n/100;
    printf("Intrest of %.0f year at %.0f rate of %.0f ammount is %.0f:\n",n,r,p,i);
    getch();
}


