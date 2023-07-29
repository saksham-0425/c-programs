#include<stdio.h>
int sum(){
    int sum,a,b;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is:%d",sum);

}
void main(){
    sum();
}
