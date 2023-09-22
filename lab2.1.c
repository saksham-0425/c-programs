#include<stdio.h>
#include<stdlib.h>

// Ques- array insertion :-



int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("enter elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }

    printf("elements : ");
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    printf("\n");

    int x;
    printf("enter the position at which you want to insert : ");
    scanf("%d",&x);
    printf("enter the data you want to be inserted : ");
    int data;
    scanf("%d",&data);

    for(int i=n;i>x;i--){
        p[i]=p[i-1];
    }
    p[x]=data;
    printf("elements after insertion : ");
    for(int i=0;i<n+1;i++){
        printf("%d ",p[i]);
    }
    printf("\n");

    // deletion:-

    printf("enter the position at which you want to delete : ");
    int y;
    scanf("%d",&y);

    for (int i = y; i < n; i++)
	{
		p[i] = p[i+1];
	}

    printf("array after deletion : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",p[i]);
	}

}