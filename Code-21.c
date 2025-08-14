#include <stdio.h>
#include <math.h>
int main()
{
    double GS,Al,De,NS;
    printf("Enter the Gross Salary:\n");
    scanf("%lf",&GS);
    Al=GS/10;
    De=GS*3/100;
    NS=GS+Al-De;
    printf("Net Salary is %0.3f",NS);
    getch();
}
