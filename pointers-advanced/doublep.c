/*
Double Pointers:

Use Cases:

    Double pointers are often used when a function needs to modify a pointer passed as an argument.
    This allows the function to update the original pointer variable.
    Double pointers can be useful in scenarios where you want to allocate memory dynamically or create dynamic data structures like linked lists, trees, or matrices.

Syntax:

    To declare a double pointer, use the ** notation. For example, int** ptr; declares a double pointer to an integer.
    To access the value stored in the memory location pointed to by a double pointer, use the * operator twice. 
    For example, int value = **ptr; assigns the value pointed to by ptr to the variable value.
    When passing a double pointer to a function, you need to pass the address of the pointer using the & operator. 
    For example, myFunction(&ptr); passes the address of ptr to the myFunction function.

Function Pointers:

Use Cases:

    Function pointers are used to pass functions as arguments to other functions. 
    This allows for dynamic invocation of different functions based on runtime conditions or user choices.
    They are commonly used for implementing callbacks, where a function is registered to be called later during a specific event or condition.
    Function pointers are also used in function tables or arrays, where different functions can be stored and invoked based on index or other criteria.

Syntax:

    To declare a function pointer, specify the return type and parameter types of the function it points to, followed by (*ptr). 
    For example, int (*funcPtr)(int, int); declares a function pointer named funcPtr that points to a function returning an integer and taking two integer arguments.
    To assign a function to a function pointer, simply assign the function's name to the pointer. 
    For example, funcPtr = &myFunction; assigns the address of the myFunction function to funcPtr.
    To call a function through a function pointer, use the (*ptr) notation followed by the arguments in parentheses. 
    For example, int result = (*funcPtr)(5, 10); invokes the function pointed to by funcPtr, passing 5 and 10 as arguments.
*/ 

#include <stdio.h>

struct integers{
	int a;
	int b;
	int c;
};

void changePointer(int **ptr, int *ptrToint){
	*ptr = ptrToint;
}

int main() {
	int a = 2,b = 3,c = 4;
	int *ptrInt = &a;
	printf("%d\n", *ptrInt);
	changePointer(&ptrInt, &c);
	printf("%d\n", *ptrInt);

    int x = 10;
    int y = 5;

    struct integers s;
    struct integers *strptr = &s;
    fprintf(stdout, "size: %lu", sizeof(strptr));

    int* ptr1 = &x;  // Pointer to an integer
    int** ptr2 = &ptr1;  // Double pointer to an integer

    printf("Value of x: %d\n", x);
    printf("Value of *ptr1: %d\n", *ptr1);
    printf("Value of **ptr2: %d\n", **ptr2);

    return 0;
}
