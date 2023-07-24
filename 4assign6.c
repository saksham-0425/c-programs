#include<stdio.h>
void main(){
    int num,i,f=1;
    printf("enter the number to find factorial");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        f=f*i;
        printf("factorial of %d:%d",num,f);
    
}


