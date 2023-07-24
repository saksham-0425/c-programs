#include<stdio.h>
void main(){
    int m1,m2,m3,m4,m5,per,t;
    printf("enter the marks of five subjects");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    per=(m1+m2+m3+m4+m5)/5;
    t=per/10;

    switch(t){
        case 9 : printf("grade:O percentage:%d",per);
        break;
        case 8 : printf("grade:E percentage:%d",per);
        break;
        case 7 : printf("grade:A percentage:%d",per );
        break;
        case 6 : printf("grade:B percentage:%d",per);
        break;
        case 5 : printf("grade:C percentage:%d",per);
        break;
        case 4 : printf("grade:D percentage:%d",per);
        break;
        case 3 : printf("grade:F percentage:%d",per);
        break;
        default : printf("enter valid marks");
        break; 
    }
}