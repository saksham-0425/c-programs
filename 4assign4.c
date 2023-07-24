#include<stdio.h>
void main()
{
    int i,n,co=0;
    printf("enter the number to check whether it is prime or not ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            co++;
        }
    }
    
    if(co==1){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}