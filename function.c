/*  FUNCTION

 Function is a block of statement which performs the paarticular task assigned to it. It helps in reducing the overall
programming effort by reusing the code as and when needed. Functions enable the programmers, to solve a large problem
by dividing the problem into smaller subproblems and solving each subproblem separately. Besides function reduces the burden
of main().
TYPES OF FUNCTION:
   Application wise-
   On this basis there are two types of function:
   a. system defined
   b. userdefined
   # the main() function is neither system defined or user defined. it is somewhere in between.
   
COMPONENTS OF A FUNCTION:
1. Function prototype-
   Function prototype provides some important information about the function to the system.by looking at the prototype
   we can determine following information.
 i.   function name 
 ii.  whether the function has any arguments or not. if yes, then how many arguments and what type of arguments.
 iii. whether the function returns or not.

 SYNTAX- 
 return type function_name(arguments);
 example- int add(int,int);

2. Function definition-
 This component defines the actual working of a function.
   
 SYNTAX- 
 return type function_name(arguments)                      no semicolon
 {
     //definition        
 }
 a function can not be defined inside a function.
 
3. Function call-
 A function can execute only when it is called by the another function unless the function is called it can not execute.
 irrespective of how much powerful the function is. 
 The function which calls is known as calling function.
 The function which is called is known as called function. 
 example: void add();          int add();
          void main(){         void add()
            add();
          }
 during a function call, the system stops the current execution saves the information and then it moves to the 
 function definition. it executes the function and comes bacck to the same location from where the function call was met.
 and again starts the current execution. whenever the function is called the same process is repeated.
 a function can be called in to scenarios, first when function does not return anything, 
                                            syntax- function_name(arg);
 second when the function returns   syntax- variable = function_name(arg);
 in case of function returning someething, the return value must be stored in a variable of same data type otherwise
 the result may be affected due to internal type conversion

TYPES OF FUNCTIONS:
on the basis of argument and return
i.   no argument no return
ii.  no argument but return
iii. argument but not return
iv.  argument and return

*/ 