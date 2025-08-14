#include <stdio.h>
#include <math.h>
int main()
{
    int l,area,perimeter;
    printf("Enter the Lenght of squre:\n");
    scanf("%d",&l);
    area=l*l;
    perimeter=l+l+l+l;
    printf("Area and Perimeter of squre is %d and %d",area,perimeter);
    getch();
}



