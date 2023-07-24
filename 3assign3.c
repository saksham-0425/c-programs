#include<stdio.h>
void main(){
    float bs,da,HRA,tax,total;
    printf("enter basic salary");
    scanf("%f",&bs);

    da=0.34*bs;
    HRA=0.15*bs;
    tax=200;
    total=bs+da+HRA-tax;
    //printf("total is:%f\n",total);
    
    if(total>=15000){
        printf("total:%f\n epf will not be deducted",total);
    }
    else{
        printf("total:%f\n epf will be deducted",total);
    }
}