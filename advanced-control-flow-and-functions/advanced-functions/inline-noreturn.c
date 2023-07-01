/*
Format of Inline Functions:
    Inline functions are defined with the inline keyword before the function declaration.
    They are typically defined in header files to allow the compiler to inline the function code where it is called.

Advantages of Inline Functions:
    Performance Improvement: Inline functions eliminate function call overhead, improving performance.
    Code Size Reduction: Inline functions replace redundant function calls with actual code, reducing code size.

Guidelines for Using Inline Functions:
    Use inline functions for small, frequently called functions.
    Avoid using them for large or complex functions.
    Define inline functions in header files.

Considerations for Using Inline Functions:
    Compiler Decision: The compiler may choose not to inline functions based on optimization settings.
    Size and Performance Impact: Inline functions can increase code size and build time.
*/

/*
Purpose: noreturn functions are used to indicate that a function does not return to the caller. 
They are typically used for functions that perform actions with no expected return value or functions that terminate the program.

Compiler Hint: The noreturn attribute is a compiler hint that helps optimize code generation. 
It informs the compiler that the function will not return, allowing it to optimize accordingly.

Function Signature: noreturn functions are declared with the return type void and the noreturn attribute. 
For example: void functionName() __attribute__((noreturn));

No Return Statement: noreturn functions should not contain any explicit return statements. 
They can terminate the program using functions like exit() or by throwing an exception.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

// Inline function to calculate the square of a number
inline static int square(int num) { // static is very important.
    return num * num;
}

void terminateProgram() __attribute__((noreturn));

noreturn void terminateProgram() {
    printf("Terminating the program...\n");
    exit(1);
}


int main() {
    int number = 5;
    int result = square(number); // Function call is replaced with the inline function code

    printf("Square of %d is %d\n", number, result);

    printf("Before calling terminateProgram()\n");

    terminateProgram();

    printf("This line will not be executed.\n");

    return 0;
}
