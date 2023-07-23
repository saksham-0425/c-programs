#include<stdio.h>
void main(){
    int s,h,m,sec;
    printf("enter the time in seconds");
    scanf("%d",&s);
    h=s/3600;
    m=(s-3600)/60;
    sec=s%60;
    printf("time:%d hours %d minutes %d seconds",h,m,sec);
}