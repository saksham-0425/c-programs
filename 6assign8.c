#include<stdio.h>
#include<string.h>

void main(){
    char str1[10], str2[10];
    int i, a;
    printf("enter the strings:");
    gets(str1);
    gets(str2);
    
    a=strcmp(str1,str2);
    if(a==0){
        printf("the strings are same");
    }
    else{
        printf("strings are not same.");
    }
    
}