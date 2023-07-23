#include<stdio.h>
void main(){
    


    float r,Area,circumference;
    printf("enter the radius");
    scanf("%f",&r);
    
    Area=3.14*r*r;
    printf("Area=%0.2f\n",Area);

    circumference=2*3.14*r;
    printf("circumference=%0.2f",circumference);
}