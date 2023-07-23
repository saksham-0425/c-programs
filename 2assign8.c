#include<stdio.h>
void main(){
    int a,b;
    printf("enter the numbers to be swapped\n");
    scanf("%d %d",&a,&b);
    printf("numbers before swapping are-a:%d b:%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers after swapping-a:%d b:%d",a,b);
}