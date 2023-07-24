#include<stdio.h>
void main(){
    int a,b,c,aver,t;
    printf("enter the marks of three subjects");
    scanf("%d %d %d",&a,&b,&c);
    aver=(a+b+c)/3;
    t=aver/10;
    switch(t){
        case 9 : printf("grade A");
        break;
        case 8 : printf("grade B");
        break;
        case 7 : printf("grade C");
        break;
        case 6 : printf("grade E");
        break;
        case 5 : printf("grade E");
        break;
        case 4 : printf("fail");
        break;
        default : printf("enter valid marks");
        break;
    }
}