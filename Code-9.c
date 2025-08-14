#include <stdio.h>
#include <math.h>
int main()
{
    double Rs,dollar;
    printf("Enter the Rs.:\n");
    scanf("%lf",&Rs);
    dollar=Rs/48;
    printf("Dollar= %.3f\n",dollar);
    getch();
}
