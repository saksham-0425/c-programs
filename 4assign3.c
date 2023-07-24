#include<stdio.h>
void main(){
    int n,sum=0,pro=1,r;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>=1){
        r=n%10;
        n=n/10;
        sum=sum+r;
        pro=pro*r;
    }
    printf("the sum and product are %d and %d respectively",sum,pro);

}