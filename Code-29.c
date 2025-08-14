#include <stdio.h>
int main()
{
    double GS,disscount,NS;
    printf("Enter the Gross Salary:\n");
    scanf("%lf",&GS);
    if(GS>=20000){
        disscount=GS*15/100;
    }
    else if(20000>GS>=10000){
        disscount=GS*10/100;
    }
    else{
        disscount=GS*5/100;
    }
    NS=GS-disscount;
    printf("Net Salary= %0.3f",NS);
    getch();
}
