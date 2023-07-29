#include<stdio.h>
void main(){
    int i,n,co=0;
    int *ptr;
    printf("enter the number:");
    scanf("%d",&n);
    ptr=&n;

    for(i=1;i<=n;i++){
        if(*ptr%i==0){
            co++;
        }
    }
    if(co==2){
        printf("%d is a prime number",*ptr);
    }
    else{
        printf("%d is not a prime number",*ptr);
    }
}