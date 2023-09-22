#include <stdio.h>
#include <stdlib.h>


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
    

    printf("enter the elements for the 2d array ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("output :- \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

   int count=0;
   for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j]==0){
                count++;
            }
        }
        printf("\n");
    }
    printf("number of zeroes : %d\n",count);

    // upper triangular matrix :-

    printf("upper triangular matrix :-\n");
    
    for(int i = 0; i<rows; i++)
    {
        printf("\n");
        for(int j = 0; j<col; j++)
        {
            if(j >= i)
    		printf(" %d ", a[i][j]);
    		else
    		printf("   ");
        }
    }
    printf("\n");

    printf("lower triangular matrix :-\n");
    
    for(int i = 0; i<rows; i++)
    {
        printf("\n");
        for(int j = 0; j<col; j++)
        {
            if(j <= i)
    		printf(" %d ", a[i][j]);
    		else
    		printf(" ");
        }
    }
    printf("\n");

    printf("elements just above the main diagonal : \n");
    for(int i = 0; i<rows; i++)
    {
        printf("\n");
        for(int j = 0; j<col; j++)
        {
            if(j > i)
    		printf(" %d ", a[i][j]);
    		else
    		printf("   ");
        }
    }
    printf("\n");

    printf("elements just below the main diagonal : \n");
    for(int i = 0; i<rows; i++)
    {
        printf("\n");
        for(int j = 0; j<col; j++)
        {
            if(j < i)
    		printf(" %d ", a[i][j]);
    		else
    		printf("   ");
        }
    }
    return 0;
}