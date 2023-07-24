#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(k=1;k<(i*2);k++){
            printf("*");
        }
        printf("\n");
    }
    
}