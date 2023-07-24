#include<stdio.h>
void main(){
    int i,j,c;
    printf("prime numbers from 1 to 100 are:");
    for(i=1;i<=100;i++){
        c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            printf("%d\n",i);
        }
    }
}