#include <stdio.h>
int main()
{
    int a,b,sum,sub,div,mul;
    printf("Enter the two number which you want to add:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of two number is %d\n",sum);
    sub=a-b;
    printf("Diffrence of two number is %d\n",sub);
    mul=a*b;
    printf("Multiply of two number is %d\n",mul);
    div=a/b;
    printf("Divide of two number is %d\n",div);
    getch();
}

