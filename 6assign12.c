#include<stdio.h>
#include<string.h>
void main(){
    char str[10];
    int i,a;
    printf("enter the string:");
    gets(str);
    a=strlen(str);
    printf("length of string: %d\n",a);
}