// #include<stdio.h>
// void main(){
//     int num[3][3];
//     int sum=0,product=1;
//     int i,j;
//     printf("enter array elements:");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&num[i][j]);
//         }
//     }
//     printf("the array elements are:\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d\n",num[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             sum=sum+num[i][j];
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             product=product*num[i][j];
//         }
//     }
//     printf("the sum of the array elements is: %d",sum);
//     printf("product of the array elements are: %d\n",product);
// }
#include<stdio.h>
  /*Write a C program to declare a 2-D array of size 3x3. Initialize 
  the array and display the array. Determine the sum and products of elements of array and display them*/
void main(){
  int arr1[3][3],i,j,sum,product; 
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=sum+arr1[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            product=product*arr1[i][j];
        }
    }
    printf("the sum of the array elements is: %d",sum);
    printf("product of the array elements are: %d\n",product);
}