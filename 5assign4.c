#include <stdio.h>

void main(){
  int ARR[10],i,j=0,lrg,lrg2nd;
  printf("enter array elements:\n");
  for(i=0;i<10;i++){
  scanf("%d",&ARR[i]);
  }
  printf("array elements are as below-\n");
  for(i=0;i<10;i++){
  printf("%d\t",ARR[i]);
  }
/* find location of the largest element in the array */		
//   lrg=arr1[0];
  lrg=0;
  for(i=0;i<10;i++)
  {
  if(lrg<ARR[i]){
   lrg=ARR[i];
   j = i;
    }
  }

/* ignore the largest element and find the 2nd largest element in the array */		
  lrg2nd=0;
  for(i=0;i<10;i++)
  {
   if(i==j){
    i++;  /* ignoring the largest element */
		i--;
    }
   else{
    if(lrg2nd<ARR[i]){
        lrg2nd=ARR[i];
      }
    }
  }

  printf("The Second largest element in the array is :  %d \n\n", lrg2nd);
}