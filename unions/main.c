/*
Purpose: 
	Unions are used to create a single data type that can hold different types of data at different times. 
	Memory allocated for a union is shared among its members. Only one member can be accessed at a time.

Memory Allocation: 
	Unions allocate enough memory to hold the largest member. 
	The size of a union is determined by the size of its largest member. 
	This ensures that the union has enough memory to accommodate the largest member.

Shared Memory: 
	All members of a union share the same memory space. 
	When you assign a value to one member, it modifies the shared memory. 
	Accessing other members may lead to undefined behavior if they were not most recently written to.

Accessing Union Members: 
	You can access different members of a union using the dot notation (unionName.memberName). 
	However, only one member can be accessed at a time. Reading from a member that was not most recently written to leads to undefined behavior.

Data can of multiple data types.
Used in embedded/direct access to hardware.
Ensures states remain mutually exclusive.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main(void) {
    
    union Data data;

    // We assign values to data.i and data.f and print their respective values. We then assign the string "Hello, World!" to data.str and print it.
    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 3.14;
    printf("data.f: %.2f\n", data.f);

    strcpy(data.str, "Hello, World!");
    printf("data.str: %s\n", data.str);

    // Since all members share the same memory space, accessing data.i after assigning the string will display garbage data. 
    // This is because the memory previously occupied by data.i is now being interpreted as part of data.str.
    printf("data.i after string assignment: %d\n", data.i);


    return 0;
}