#include<stdio.h>
#include<string.h>
void main(){
    char str1[10],str2[10];
    int i;
    printf("enter  character array elements:\n");
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
        
    }
    puts(str1);
    puts(str2);
}
