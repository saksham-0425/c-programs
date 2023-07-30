
/* array is a derived data type that can store multiple values of same nature
TYPE OF ARRAYS-
1-D array
multi dimensional array (2-D) till 10-D

1-D ARRAY:-
array which stores the values in one dimension is called one dimension array
DECLARATION-
datatype arrayname[size- maximum number of elements];
*/
#include<stdio.h>
void main(){
    //int A[5];
    //each partition will be of 2bytes for 16 bits i.e 5 partitions
    // we may leave the size

/*
INDEX OF ARRAY ELEMENTS:
while using array, system uses index to refer to a particular array element , by default indexing starts from 0
however, we can change the indexing as per our requirements
int num[5];

ARRAY INITIALIZATION:
like variables  arrays can also be initialised in following two ways-
1. compile time
2. run time
In compile time method, the values are directly are directly given in the source code when we write the code.
num[0]=10;
or
num[]={10,20,30,40,50};
 */

/* whenever we want to use array, for any purpose like taking input to the array,using array element for any computation
or displaying the array elements loop is mandatory. thee loop counter is always initialised by the lowest index
and it is tested with a condition where the RHS is size-1.

Q. WAP in c to enter 10 integer values in a 1-D array and display them. Determine the sum of array elements and 
print the sum.  
*/
    int num[10];
    int i;
    int sum=0;
    printf("enter array elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("array elements are as below-\n");
    for(i=0;i<10;i++){
        printf("%d\t",num[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+num[i];
    }
    printf("sum is :%d",sum);
}
 /* 2-D ARRAYS:-

 to rrepresent multidimensional data 1d array is not enough thats why another type of array was introduced which is onown as 
 multi dimensional array.
 the most simplest form of multidimensional data is a table where data is representeed in rows and columns 
 for which 2d array is required.
 2d array is a form of array that caan represent 2dimensional data form real life problems

DECLARATION-
syntax- data type | array name|[rowsize]|[columnsize]; - 24 bytes of memory allocation in the system(12 partitions 
and each partition is of 2 bytes)
while declaring 2d array the good programming practice encourages mentioning both row and column size ,however
we can also declare a 2d array with inly column size and the row size is not mentioned, in this setup the number of rows 
are decided based on storage of elements. the system always stores the elements in column wise manner when the column
size is full the system moves to the next row 
however, we should avoid declaring a 2d array without column size, this is because in absence of column size, the 
system will keep on storing the elements in the same row as there is no restriction on coulumns which ultimately means
our 2d array behaves like 1d array

INITIALISATION-
like previous scenarios 2d array can also be initialised in following two ways:
1.compile time 
2.run time          
                    COMPILE TIME:
                    int A[2][2];         or      A[2][2]={10,20,30,40};
                    A[0][0]=10;                         or
                    A[0][1]=20;                          {{10,20},{30,40}}; - informative
                       
                    RUN TIME:
In 2d arrays, nesting of loops is mandatory whenever array is used.
int A[2][2];
int i,j;
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&A[i][j]);
    }
}                         

for(i=o;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\t",A[i][j])
    }
    printf("\n");
}

ques. wap in c to determine inverse of a matrix

*/ 
