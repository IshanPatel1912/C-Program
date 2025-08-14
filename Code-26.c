#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of B:\n");
    scanf("%d",&b);
    printf("Enter the value of C:\n");
    scanf("%d",&c);
    if (a > b && a > c) {printf("Largest: %d\n", a);}
else if (b > a && b > c) {printf("Largest: %d\n", b);}
else {printf("Largest: %d\n", c);}
if (a < b && a < c) {printf("Smallest: %d\n", a);}
else if (b < a && b < c) {printf("Smallest: %d\n", b);}
else {printf("Smallest: %d\n", c);}
    getch();
}

