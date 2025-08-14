#include <stdio.h>
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
    if(avg>=70){
        printf("Distriction, Total of three subject is %0.0f and the Percentage is %0.3f",total,avg);
    }
    else if(avg>=60){
        printf("First, Total of three subject is %0.0f and the Percentage is %0.3f",total,avg);
    }
    else if(avg>=50){
        printf("Second, Total of three subject is %0.0f and the Percentage is %0.3f",total,avg);
    }
    else if(avg>=35){
        printf("Third, Total of three subject is %0.0f and the Percentage is %0.3f",total,avg);
    }
    else{printf("Better Luck Next time you are fail");}
    getch();
}
