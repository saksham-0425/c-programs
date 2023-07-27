#include<stdio.h>
#include<string.h>
void main(){
    char str[10];
    int len=0;
    int i;
    puts("enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len=len+1;
    }
    printf("length=%d\n",len);
}