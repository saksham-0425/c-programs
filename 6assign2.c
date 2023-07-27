#include<stdio.h>
#include<string.h>
void main(){
    char str[10];
    int uc=0,lc=0;
    int i;
    printf("enter the string");
    gets(str);
    printf("array is:");
    for(i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    for(i=0;str[i]='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            uc++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            lc++;
        }
    }
    printf("the number of uppercase is: %d",uc);
    printf("the number of lower case is: %d",lc);
}