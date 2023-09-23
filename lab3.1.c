#include <stdio.h>
#include <stdlib.h>

// implementation of 2D array using dynamic memory allocation :-

int main()
{
    printf("enter the row and column number of the 2d array:\n");
    int rows, col;
    scanf("%d %d", &rows, &col);

    int **a;
    a = (int **)malloc(rows * sizeof(int));
    

    for (int i = 0; i < rows; i++)
    {
        a[i] = (int *)malloc(col * sizeof(int));
    }
    

    printf("enter the elements for the 2d array");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("matrix :-");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
   int temp;
   int transpose[rows][col];
   for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        
        transpose[i][j]=a[j][i];
    }
    printf("\n");
   }
    for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        
       printf("%d ",transpose[i][j]);
    }
    printf("\n");
   }
    return 0;
}