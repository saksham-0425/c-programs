#include<stdio.h>
#include<string.h>

void main(){
    char A[10];
    int i;
    int co=0;
    int no=0;
    int sp=0;
    printf("enter  character array elements:\n");
    gets(A);
    printf("array elements are as below-\n");
    for(i=0;A[i]!='\0';i++){
        printf("%c\t",A[i]);
    }
    for(i=0;A[i]!='\0';i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            co++;
        }
        else if(A[i]==' '){
            sp++;
        }
        else{
            no++;
        }

    }
    printf("number of vowels:%d\n",co);
    printf("spaces:%d\n",sp);
    printf("number of consonants: %d",no);
}

