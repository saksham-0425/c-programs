#include<stdio.h>
void main(){
    int i,n,a,b,c;
    printf("enter a number:");
    scanf("%d",&n);
    i=1;
    a=0;
    b=1;
    while(i<=n){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}