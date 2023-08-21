#include<stdio.h>

int complex_sum(int a,int b,int c,int d){
    printf("Sum : %d + %di\n",a+c,b+d); 
}

int complex_multiplication(int a,int b,int c,int d){
    int x,y;
    x=a*c-b*d;
    y=a*d+b*c;
    printf("\nMultiplication : %d + %di",x,y);
}

int main(){
    printf("Enter complex number:");
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    printf("Enter complex number: ");
    scanf("%d %d",&c,&d);
    printf("\nMENU\n 1. Addition \n 2. Multiplication\n 3. To end the simulation\n");
    
    while(1){
        int n;
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        if(n==1){
        complex_sum(a,b,c,d);
        }
        else if(n==2){
        complex_multiplication(a,b,c,d);
        }
        else if(n==3){
         break;
        }
        else{
            printf("Enter valid choice");
            break;
        }
    }
    
}