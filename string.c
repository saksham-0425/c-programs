/* STRING:
In real life scenarios there are many situations where the input is of more than one character which the basic datatype
can not handle i.e character(char)
To overcome this problem, a special type of 1d array was introduced where datatype is always character. It is known
as Character array and many a times it behaves like string.

DIIFERENCE B/W CHARAACTER ARRAY AND STRING-
#char A[5] while  looking at the initialisation one can not decide whether it is character array or string
when looping is done for declaration, it is an character array else string.

SYNTAX: char name[size];
INITIALISATION:
1.compile time 
2.run time 

compile time -                    char array:
            char str[5];         
            str="HELLO";           str=['h','e','l','l','o'];
run time -
            char str[5];
            printf("enter a string:\n");
            scanf("%s",str);
            printf("string=%s\n",str);
to initiaise a string in run time scanf statement is used where the formal specifier is %s and there is no need & symbol
before string name. this is because string is capable enough to find the address by itself.
however, using scanf we can only enter one word string which means scanf can not be used in case of multiword string
This is because the moment we press space, the system terminates the string by using a null character (\o) at the 
end of a string. 
(this is for run time only, in compile time, uh will have to enter the null character by uhrself.
ex- str="HELLO\o");

HOW TO ENTER A MULTIWORD STRING:
gets() and puts()
c provides two special functions gets and puts for input and output fn. respectively.

char str[20];
printf("enter the string\n");
gets(str);
printf("string=%s",str);

char str[20];
puts("enter the string");
gets(str);
printf("")
puts(str);

STD. LIB. FUNCTIONS FOR STRING:
1. strlen(str)- to find the length 
   len = strlen(str);
2. strcpy(source, destination);- to copy the string into another string
3. strcmp(str1,str2);- to compare two strings (equal or different)
 When the strings are same then the fn. givses the result 0.otherwise the fn. gives the rresult as the difference of
 ASCII values of first different character.
4. strcat()- the second string will be added at the end of first string.
 str3 = strcat(str1,str2);
5. strrev()- to reverse the string 
str2 = strrec(str1);
*/
/*wap in c to enter a string. display the length of string and copy the string to another string.
 Display both the strings*/
#include<stdio.h>
#include<string.h>
void main(){
    char str1[10], str2[10];
    int len=0;
    int i;
    puts("enter the string:");
    gets(str1);
    for(i=0;str1[i]!='\o';i++){
        len=len+1;
    }
    printf("length=%d\n",len);
    for(i=0;str1[i]!='\o';i++){
        str2[i]=str1[i];
        str2[i]='\o';
        puts(str1);
        puts(str2);
    }
}