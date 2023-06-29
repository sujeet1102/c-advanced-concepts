#include <stdio.h>
#include <stdlib.h>

/*
goto statement
Causes program control to jump to particular line the program.
Labels are used to jump to that particular line. It follows same rules as variables. Label is placed directly before the branch statement.
goto and label have to be in the same scope {}.
It has a bad rep because programs are generally sequencial and goto breaks that.
*/

/*
setjmp & longjmp
they can be used as try and catch respectively for error handling purposes.
what makes them different from goto, is they can jump functions and files.
so lets say you have multiple nested functions, we want the errors to be handled in first function itself.
setjmp saves a copy the program counter and current pointer to the top of the stack. a vairiable j is used to remember.
	int setjmp(jmp_buf j)
longjmp is invoked to go back to state where setjmp was used. restores the process in state that it existed at setjmp.
it returns i so that code knows when you actually got back using longjmp. the contents of j are destroyed after longjmp.
	longjmp(jmp_buf j, int i)
*/

#include <setjmp.h>

jmp_buf buf;

void second() {
    printf("second() function\n");
    longjmp(buf, 1);  // Jump back to the saved point
}

void first() {
    printf("first() function\n");
    second();
    printf("first() function again\n");
}

int main(void) {

	if (setjmp(buf) == 0) {
        first();
    } else {
        printf("Jumped back to main()\n");
    }
    
	// int i, j, k, l;

    // for (i = 1; i <= 10; i++) {
    //     for (j = 1; j <= 20; j++) {
    //         for (k = 1; k <= 30; k++) {
    //             for (l = 1; l <= 40; l++) {
    //                 printf("%d %d %d %d\n", i, j, k, l);
    //                 if (i == 2 && j == 2 && k == 2 && l == 2) {
    //                     goto end_loop;
    //                 }
    //             }
    //         }
    //     }
    // }

    // end_loop:
    // printf("Loop escaped at i=%d, j=%d, k=%d, l=%d\n", i, j, k, l); // goto are preferrably not used but in this special scenario where we wish to escape from multiple for loops its ok.

    return 0;
}