#include<stdio.h>
void main()
{
    int m1,m2,m3,aver;
    printf("enter the marks in three subjects out of 100");
    scanf("%d %d %d", &m1, &m2, &m3);

    aver=(m1+m2+m3)/3;

    if (aver>=90 && aver<=100){
        printf("your grade is A+ and average is %d",aver);}
    else if(aver>=85 && aver<90){
        printf("your grade is A and average is %d",aver);
    }
    else if(aver>=75 && aver<85){
        printf("your grade is B and average is %d",aver);
    }
    else if(aver>=65 && aver<75){
        printf("your grade is C average is %d",aver);
    }
    else{
        printf("you fail and your average is %d",aver);
    }
}