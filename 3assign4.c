#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("largest number:%d",a);
        
        }
        else{
            printf("largest number:%d",c);
        }
    }
    else{
        if(b>c){
            printf("largest number:%d",b);
        }
        else{
            printf("largest number:%d",c);
        }   
    }   
}
