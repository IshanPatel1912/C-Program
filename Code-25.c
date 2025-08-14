#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of B:\n");
    scanf("%d",&b);
    if(a>b){printf("A is greater than B");}
    else{printf("B is greater than A");}
    getch();
}
