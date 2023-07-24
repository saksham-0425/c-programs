#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    float real,img,dis,r1,r2,r;
    printf("enter the coefficients a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    dis=b*b-4*a*c;

    if(dis>0){
        printf("roots are real and distinct:%f\n",dis);
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("roots are r1:%f and r2:%f\n",r1,r2);
    }
    else if(dis==0){
        printf("roots are equal:%f\n",dis);
        r=-b/(2*a);
        printf("both roots are same i.e r=%f\n",r);
    }
    else if(dis<0){
        printf("roots are imaginary: %f\n",dis);
    }
    else{
        printf("enter the valid coefficients\n");
    }
}