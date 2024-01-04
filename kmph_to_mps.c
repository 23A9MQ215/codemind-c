#include<stdio.h>
int main()
{
    double kmph,mps;
    scanf("%lf",&kmph);
    mps=kmph*1000/3600;
    printf("%.2f",mps);
}