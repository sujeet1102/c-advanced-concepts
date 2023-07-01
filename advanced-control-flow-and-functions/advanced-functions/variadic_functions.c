#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*
variadic functions
the no. of arguments passed to the fuctions are unknown. potentially any no. of arguments possible.
contributes to flexibility.
printf is a example. 

it has two parts
- mandatory arguments (atleast 1 and first one in order)
- optional arguments

va_list
- when we need to access optional parameters and it is an argument list.
va_start
- will connect argument list to certail argument pointer. list in va_list is first argument, seconf argument is last fixed parameter.
va_arg
- will fetch the current argument connected to the argument list.
va_end
- when we want to stop using variable argument list.
va_copy
- situations we need to save our current location.

int f1(int n,...);
*/

double calculateAverage(int num, ...)
{
    va_list arguments, arguments_copy;
    double sum = 0.0;
    int count = 0;
    
    // Initialize the argument list
    va_start(arguments, num);
    
    // Make a copy of the argument list
    va_copy(arguments_copy, arguments);
    
    // Accessing the arguments using va_arg and calculating the sum
    for (int i = 0; i < num; i++) {
        sum += va_arg(arguments, int);
        count++;
    }
    
    // Clean up the argument lists
    va_end(arguments);
    va_end(arguments_copy);
    
    // Return the average
    return sum / count;
}

int main(void) {
    
    double average = calculateAverage(5, 10, 20, 30, 40, 50);
    printf("Average: %.2f\n", average);

    return 0;
}