#include<stdio.h>
int main(){
    int i,temp,a[10],large,small,l,s;

    for(i = 0 ; i < 10 ; i++){
        scanf("%d", &a[i]);
        large=small=a[0];
    }

    for(i = 0 ; i < 10 ; i++){
        if(a[i]>large){
            large=a[i];
        }
        if(a[i]<small){
            small=a[i];
        }
    }

    for(i = 0 ; i < 10 ; i++){
            if(a[i]==large){
            l=i;
            }
    }
    for(i = 0 ; i < 10 ; i++){
      if(a[i]==small){
      s=i;
       }
    }


    printf("THE  ARRAY BEFORE SWAPPING=\n");
    for(i = 0 ; i < 10 ; i++){
        printf("%d\n",a[i]);
    }
    printf("The smallest and the larges are %d %d\n", small,large);
    
    
    temp=a[s];
    a[s]=a[l];
    a[l]=temp;
    printf("array after swapping:");
    for(i = 0 ; i < 10 ; i++){
    printf("%d\n", a[i]);
    }
    
    return 0;
}