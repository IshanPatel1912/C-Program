#include <stdio.h>
#include <math.h>
int main()
{
    double Rs,dollar;
    printf("Enter the Dollar:\n");
    scanf("%lf",&dollar);
    Rs=dollar*48;
    printf("Rs.= %.3f\n",Rs);
    getch();
}
