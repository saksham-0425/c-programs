#include<stdio.h>
void main(){


    //to convert fahrenheit to celsius
    float cel,far;
    printf("enter the temp in fahrenhite");
    scanf("%f",&far);
    cel=(far-32)/1.8;
    printf("%f",cel);
}