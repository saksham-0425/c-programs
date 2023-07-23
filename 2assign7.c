#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the numbers to be swapped:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("numbers after swapping-a:%d b:%d",a,b);
}