#include<stdio.h>
int main(){
    int rem,prod1=1,prod2=1,sum1=0,sum2=0,rev1=0,rev2=0,num1,num2;

    printf("Enter the 2 numbers =");
    scanf("%d %d", &num1,&num2);
//SUM
    if(num1>num2){
        while(num1!=0){
            rem=num1%10;
            sum1=sum1+rem;
            num1=num1/10;
        }   
        while(num2!=0){
            rem=num2%10;
            sum2=sum2+rem;
            num2=num2/10;
        }
    printf("%d %d", sum1, sum2);
    }else if(num2>num1){
        while(num1!=0){
            rem=num1%10;
            prod1=prod1*rem;
            num1=num1/10;
        }
        while(num2!=0){
            rem=num2%10;
            prod2=prod2*rem;
            num2=num2/10;
        }
        printf("%d %d", prod1 ,prod2);
    }
    else{
    while(num1=0){
        rem=num1%10;
        rev1=rev1*10+rem;
        num1/=10;
    }
    while(num2!=0){
        rem=num2%10;
        rev2=rev2*10+rem;
        num2/=10;
    }
    printf("%d %d", rev1, rev2);
    }
    return 0;
}