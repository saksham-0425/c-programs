#include<stdio.h>
void main(){
    int ARR[10];
    int i,j,a;
    printf("enter array elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&ARR[i]);
    }
    printf("array elements before swapping are as below-\n");
    for(i=0;i<10;i++){
        printf("%d\t",ARR[i]);
    }
    a=ARR[0];
    ARR[0]=ARR[9];
    ARR[9]=a;
    
    printf("array elements after swapping are as below-\n");
     for(i=0;i<10;i++){
        printf("%d\t",ARR[i]);
    }
   
}