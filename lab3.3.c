#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("enter the degree : ");
    int n;
    scanf("%d",&n);
    
    int x=n+1;
    int *a=(int *)malloc(x*sizeof(int));
    int *b=(int *)malloc(x*sizeof(int));
    int *c=(int *)malloc(x*sizeof(int));
    
    printf("enter the polynomial 1 (lowest to highest) : ");
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter the polynomial 2 (lowest to highest) : ");
    for(int i=0;i<x;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<x;i++){
       c[i]=a[i]+b[i];
    }

    printf("resultant polynomial : ");
    for(int i=0;i<x;i++){
       printf("%d ",c[i]);
    }

}