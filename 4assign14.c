#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int a=n;
    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==n){
        printf("%d is a perfect number",a);
    }
    else{
        printf("%d is not a perfect number",a);
    }
}