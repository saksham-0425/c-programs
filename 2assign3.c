#include<stdio.h>
void main(){


//To find the area and perimeter
    int length,breadth;
    printf("enter length and breadth ");
    scanf("%d %d",&length,&breadth);
    printf("The area =%d\n", length*breadth);
    printf("The Perimeter =%d\n",(length+breadth)*2);
}