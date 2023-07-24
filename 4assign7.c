#include<stdio.h>
void main(){
    int n,rev=0,remainder;
    printf("enter an integer:");
    scanf("%d",&n);

    while(n!=0){
        remainder=n%10;
        rev=rev*10+remainder;
        n/=10;
    }
    printf("reversed number is:%d",rev);
}