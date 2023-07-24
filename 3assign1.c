#include<stdio.h>
void main(){
    int a,b;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);

    if(a<b){
        printf("the smallest number is %d",a);
    }
    else{
        printf("the smallest number is %d",b);
    }
}