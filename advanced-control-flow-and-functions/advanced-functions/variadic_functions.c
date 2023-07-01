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

va_list: va_list is a type used to hold the information required to retrieve the optional arguments in a variadic function.

va_start: The va_start macro is used to initialize the va_list type variable. It takes two arguments:
    va_list ap: The va_list variable that will be initialized.
    last_arg: The last fixed parameter before the optional arguments.

va_arg: The va_arg macro is used to fetch the current argument of the given type from the va_list. It takes two arguments:
    va_list ap: The va_list variable from which the argument will be fetched.
    type: The type of the argument to be fetched.

va_end: The va_end macro is used to clean up the va_list variable after all the optional arguments have been accessed. It takes one argument:
    va_list ap: The va_list variable to be cleaned up.

va_copy: The va_copy macro is used to create a copy of a va_list variable. It takes two arguments:
    dest: The va_list variable that will hold the copy.
    src: The original va_list variable to be copied.

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