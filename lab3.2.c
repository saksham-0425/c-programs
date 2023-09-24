#include<stdio.h>
#include<stdlib.h>
int main(){
     printf("enter the row and column number of the 2d array:\n");
    int rows, col;
    scanf("%d %d", &rows, &col);

    int a[rows][col];
    printf("enter the input");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix 1 is :-\n");
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    int c[rows][col];
    printf("enter the elements for 2nd 2d array :-\n");
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }

    printf("matrix 2 is :-\n");
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

int y[rows][col];
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        y[i][j]=a[i][j]+c[i][j];
    }
}
int count = 0;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        if (y[i][j] != 0)
        {
            count++;
        }
    }
}
int x = 0;
int b[3][count];
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        if (y[i][j] != 0)
        {
            b[0][x] = i;
            b[1][x] = j;
            b[2][x] = y[i][j];
            x++;
        }
    }
}

printf("output:-");
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < col; j++)
    {
        printf("%d ", b[i][j]);
    }
    printf("\n");
}
}