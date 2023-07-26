#include<stdio.h>
void main(){
    int num[10];
    int i;
    int sum=0;
    int pro=1;
    printf("enter array elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("array elements are as below-\n");
    for(i=0;i<10;i++){
        printf("%d\t",num[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+num[i];
    }
    printf("sum is :%d\n",sum);
    for(i=1;i<10;i++){
        pro=pro*num[i];
        
    }
    printf("product is:%d",pro);
}