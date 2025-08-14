#include <stdio.h>
#include <math.h>
int main()
{
    double GS,NS,disscount;
    printf("Enter the Gross Sale:\n");
    scanf("%lf",&GS);
    disscount=GS/10;
    NS=GS-disscount;
    printf("Net Sale is %0.3f",NS);
    getch();
}
