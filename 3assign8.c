#include<stdio.h>
void main(){
    int a,b,ch;
     //1:addition 2:subtraction 3:multiplication 4:division
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("enter the operation you want to perform\n");
    scanf("%d",&ch);

    switch(ch){
        case 1 : printf("sum is:%d",a+b);
        break;
        case 2 : printf("subtraction is:%d",a-b);
        break;
        case 3 : printf("multiplication is:%d",a*b);
        break;
        case 4 : printf("division is:%d",a/b);
        break;
        default : printf("not a valid operator");
        break;
        }
    }