#include<stdio.h>
void main ()
{
    int i;
    int t1 = 0, t2 = 1;
    int nexterm = t1 + t2;
    printf("fibonacci series: %d %d",t1,t2);
    for(i=3;i<=100;++i)
    {
        printf("%d",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
}