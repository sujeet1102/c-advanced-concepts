/*
Type qualifiers
Used in front of variables to give compiler specific instructions.
Significant in terms of optimizations.
*/

/*
const
tells compiler that it will not be modified in the program.
when optimized its placed in read only memory.
can also be used with arrays.
*/

/*
volatile
tells compiler that particular variable can change anytime in the runtime of program.
thus compiler will not compress it during heavy optimizations.
Use cases:
- memory mapped peripheral registers.
- global variables used by ISRs.
- global variables used by multiple tasks in multi threaded program.
*/

/*
NOTE: a variable can be both const and volatile. bcz it can change enexpectedly but program should not try to modify it.
example: status register in embedded.
*/

/*
restrict
used in pointer declaration.
make sure that a particular pointer is only referance to that particular value.
so two pointers cannot point to same memory location.
*/

#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14;

volatile int x;

int * restrict y;

int main(void) {
    
    

    return 0;
}