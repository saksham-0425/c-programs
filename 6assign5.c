#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char str[10];
    int i,len=0;
    printf("enter the array:");
    gets(str);
    printf("the array is:");
    for(i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    printf("reversed string:%s\n",strrev(str));
}