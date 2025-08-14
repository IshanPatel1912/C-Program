#include <stdio.h>
int main()
{
    int a,inthr;
    printf("Enter the interger part of hours:\n");
    scanf("%d",&inthr);
    a=inthr*60;
    printf("Total Min: %d\n",a);
    getch();
}
