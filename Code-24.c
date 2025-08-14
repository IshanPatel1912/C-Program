#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of B:\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("A is %d and B is %d",a,b);
    getch();
}
