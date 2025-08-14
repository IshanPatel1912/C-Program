#include <stdio.h>
#include <math.h>
int main()
{
    double sub1,sub2,sub3,avg,total;
    printf("Enter the marks of Subject 1:\n");
    scanf("%lf",&sub1);
    printf("Enter the marks of Subject 2:\n");
    scanf("%lf",&sub2);
    printf("Enter the marks of Subject 3:\n");
    scanf("%lf",&sub3);
    total=sub1+sub2+sub3;
    avg=total/3;
    printf("Total of three subject is %0.0f and the avregae is %0.3f",total,avg);
    getch();
}
