#include<stdio.h>
void main(){
    int i,j,n,sum=0;
    n=10;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            sum=sum+j;
        }
    }
    printf("sum: %d",sum);
}