#include<stdio.h>
#include<string.h>
void main(){
    char str[10];
    int i;
    printf("enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("string in uppercase is= %s",str);
}