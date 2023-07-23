#include<stdio.h>
void main(){
     //To Convert M-->Km
    int m,km,s;
    printf("enter the distance in meters");
    scanf("%d",&m);
    km=m/1000;
    s=m % 1000;
    printf("distance :%d km %d m",km,s);
}