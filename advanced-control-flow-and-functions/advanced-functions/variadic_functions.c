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

int main(void) {
    
    

    return 0;
}