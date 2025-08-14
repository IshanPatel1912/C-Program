#include <stdio.h>
#include <math.h>
int main()
{
    int l,h,area,perimeter;
    printf("Enter the Lenght and hight of Rectangel:\n");
    scanf("%d%d",&l,&h);
    area=l*h;
    perimeter=l+l+h+h;
    printf("Area and Perimeter of rectangle is %d and %d",area,perimeter);
    getch();
}


