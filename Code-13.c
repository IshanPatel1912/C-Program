#include <stdio.h>
#include <math.h>
int main()
{
    double by,kb,mb,gb;
    printf("Enter the bytes:\n");
    scanf("%lf",&by);
    kb=by/1000;
    mb=kb/1024;
    gb=mb/1024;
    printf("Kb= %.3f\n Mb= %0.3f\n Gb= %0.3f\n",kb,mb,gb);
    getch();
}
