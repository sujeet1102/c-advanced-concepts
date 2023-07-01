/*
    Format of a Recursive Function:
        Define the recursive function with a return type and parameters as needed.
        Include a base case to handle the simplest form of the problem.
        Include a recursive case that calls the function itself with modified arguments.

    Base Case:
        The base case provides the exit condition for the recursion. It should be defined explicitly.
        The base case should be simple and easily solvable, avoiding any further recursive calls.
        Ensure that the base case is reached at some point to prevent infinite recursion.

    Exit Condition:
        The exit condition is the condition that determines when to stop the recursion.
        It is usually checked at the beginning of the recursive function before any further processing.
        The exit condition should be carefully designed to ensure the recursion terminates.

    Recursive Call:
        The recursive call is the step where the function calls itself with modified arguments.
        The arguments passed in the recursive call should be closer to the base case to make progress towards the termination condition.
        Ensure that the arguments are modified correctly to ensure progress towards the base case.

    Recursive Stack:
        Each recursive function call creates a new stack frame, which requires memory allocation.
        Recursive functions may lead to stack overflow if the depth of recursion becomes too large.
        Tail recursion, where the recursive call is the last operation in the function, can optimize memory usage and prevent stack overflow.

    Proper Exit and Return:
        Make sure to handle the return values correctly at each level of recursion.
        Return the appropriate result at the base case.
        Properly accumulate and combine the results as the recursive calls unwind.

    Recursive Problem Analysis:
        Analyze the problem to identify if it can be solved using recursion.
        Determine the relationship between the problem and its subproblems.
        Break down the problem into smaller, similar subproblems.

    Testing and Debugging:
        Test the recursive function with various input sizes, including edge cases.
        Debug the function using print statements or a debugger to trace the recursive calls and intermediate results.
*/

#include <stdio.h>
#include <stdlib.h>

// void Print_infinite(void){
//     static int i=0;
//     if(i == 10){ // We need to add condition to break the infinite loop.
//         exit(0);
//     }
//     i++;
//     printf("Looping");
//     Print_infinite();
// }

int factorial(int num){
    if(num<0){
        printf("Error! Num less than 0");
        exit(1);
    }
    if(num==0){
        return 1;
    }
    return (num * factorial(num-1));
}

int main(void) {
    
    // Print_infinite();
    printf("%d", factorial(5));

    return 0;
}