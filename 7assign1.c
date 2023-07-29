#include<stdio.h>
int sum(int a, int b){
    int sum;
    sum=a+b;
    printf("sum=%d\n",sum);
}
int pro(int a, int b){
    int pro;
    pro=a*b;
    printf("product=%d\n",pro);
}
int sub(int a, int b){
    int sub;
    sub=a-b;
    printf("subtraction=%d\n",sub);
}
int div(int a, int b){
    int div;
    div=a/b;
    printf("division=%d\n",div);

}
void main(){
    int num1,num2;
    printf("enter numbers:");
    scanf("%d %d",&num1,&num2);
    sum(num1,num2);
    sub(num1,num2);
    pro(num1,num2);
    div(num1,num2);
}