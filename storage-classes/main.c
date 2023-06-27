#include <stdio.h>

/*
Extern
A global variable is declared in a certain file.
That global variable can be accessed by other files using "extern" preceeding its declaration.
WARNING: In this other file you cannot initialize this variable.
Similarly functions can be used using extern.
*/

/*
Static
Static has two different meanings depending on where its applied.
It is only initialized once. Default value is 0. They are in heap obviously.
Should not be declared in a struct.
1. Static used on local variable
	It instructs compiler to keep existence of variable for entire lifetime of program.
	Its scope remains what is defined. But its existence (value) remains.
2. Static on global variable (same when applied on function)
	It instructs compiler to restrict scope of global variable to only that particular file. extern will be obsolete.
*/

/*
Register
Storage class used to store a local variable in CPU register instead of RAM.
Very fast access.
& address value cannot be used.
Can only be used in local scope for obvious reasons.
*/

int moveNum = 0;

void PRINT(void){
	printf("Hello World!\n");
}

static void fun(void){	// can only be called from this file.
	int x = 0; // value forgotten each time ends.
	static int y = 0; // value will be remembered.
	printf("%d , %d\n",x,y);
	x++,y++;
}

int main(int argc, char const *argv[])
{
	auto int z = 0; // By default all local variables are auto. No significant use.
	register int abc = 1;
	fun();
	fun();
	fun();
	printf("%d", abc);
	return 0;
}