#include<stdio.h>
#include<string.h>

void main(){
    char str1[10],str2[10];
    int i,j;
    printf("enter the strings:");
    gets(str1);
    gets(str2);
    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string = %s", str1);

}