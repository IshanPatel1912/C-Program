#include <stdio.h>
int main()
{
    double GS,Al,De,NS;
    printf("Enter the Gross Salary:\n");
    scanf("%lf",&GS);
    if(GS>10000){
        Al=GS*10/100;
        De=GS*3/100;
    }
    else if(10000>GS>=5000){
        Al=GS*7/100;
        De=GS*2/100;
    }
    NS=GS+Al-De;
    printf("Net Salary= %0.3f",NS);
    getch();
}

