## Notes on Channels

C programming is a general-purpose, procedural, imperative computer programming language. 

## Importance of C Language

* C is called as a robust language, which has so many built-in functions and operations, which can be used to write any complex program.

* Generally, we use to call C as a middle level language. Because, the ‘C’ compiler combines the capabilities of an assembly language with the features of a high-level language. Therefore, it is best for writing both system software and business packages.

* ‘C’ Programs are efficient and fast.

* C is highly portable, that is, ‘C’ programs written on one computer can be run on another with little (or) no modification.

* ‘C’ language is best for structured programming, where the user can think of a problem in terms of function modules (or) blocks.

* It has the ability to extend itself.

It was named ‘C’ because it is an offspring of BCPL (Basic Combined Programming Language) which was popularly called ‘B’ language.

## General form of a ‘C’ program

The general form of C program is as follows −

```
/* documentation section */
preprocessor directives
global declaration
main ( ){
   local declaration
   executable statements
}
returntype function name (argument list){
   local declaration
   executable statements
}
```

## Example
Following is the C program by using function with no arguments and with return value to perform addition −

```
#include<stdio.h>
void main(){
   //Syntax for addition (function has int because we are returning values for function//
   int sum();
   int add;
   add = sum();
   printf("Addition of two numbers is : %d",add);
}
int sum(){
   //Declaring actual parameters//
   int a,b,add;
   //Reading User I/p//
   printf("Enter a,b :");
   scanf("%d,%d",&a,&b);
   //Addition operation//
   add=a+b;
   //Returning value//
   return add;
}
```

## Output
When the above program is executed, it produces the following result −

```
Enter a,b :4,6
Addition of two numbers is : 10
```
