#include<stdio.h>
void main(){
    int ARR[10];
    int i,max,min,small,large;
    printf("enter array elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&ARR[i]);
    }
    printf("array elements are as below-\n");
    for(i=0;i<10;i++){
        printf("%d\t",ARR[i]);
    }
    small=ARR[0];
    large=ARR[0];
    for (i = 0; i < 10; i++)
    {
        if (ARR[i] < small)
        {
            small = ARR[i];
        }
        
        if (ARR[i] > large)
        {
            large = ARR[i];
        }
    }

    printf("\nLargest element is : %d", large);
    printf("\nSmallest element is : %d", small);

}