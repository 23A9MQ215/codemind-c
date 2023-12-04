#include<stdio.h>
int main()
{
    int year,n;
    scanf("%d",&n);
    year=n%100;
    printf("%02d",year);
}