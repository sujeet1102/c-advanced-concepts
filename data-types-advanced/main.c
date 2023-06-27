/*
Preprocessor - #define
Its a preprocessor directive meaning it does not get compiled and gets replaced by its value before compilation.
Its textual wrapper for something else. Can be used to define user defined variables that will be changed frequently thus saving memory.
Used commonly in embedded.
It constitutes of one line (logical).
It makes program more readable.
*/


/*
typedef
Allows us to create own name for existing data types. Readable, easy to maintain.
Commonly used with struct for bit fields & stuff in embedded.
*/

/*
Variably sized array
Input a number and then create static array of that size.
*/

#define YES 1 //YES will be replaced by 1 before compilation.
#include <stdio.h>
#include <stdlib.h>

typedef int foo;

int main(void) {

    foo x;
    printf("Enter number:\n");
    scanf("%d",&x);
    foo array[x];
    for(foo i=0; i<x; i++){
    	array[i]=i;
    }
    for(foo i=0; i<x; i++){
    	printf("%d ",array[i]);
    }

    return 0;
}