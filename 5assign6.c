#include<stdio.h>
void main(){
    int ARR[10];
    int i,j;
     printf("enter array elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&ARR[i]);
    }
    printf("array elements are as below-\n");
    for(i=0;i<10;i++){
        printf("%d\t\n",ARR[i]);
    }
    printf("reverse ordered array:\n");
    for(i=9;i>=0;i--){
        printf("%d\n",ARR[i]);
    }

}