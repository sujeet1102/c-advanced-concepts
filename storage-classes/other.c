#include <stdio.h>

extern int moveNum; // See not initialized. Scope is defined by where you put this.

extern void PRINT(void);

// int main(int argc, char const *argv[])
// {
// 	printf("%d\t", moveNum);
// 	moveNum = 9;
// 	printf("%d\t", moveNum);
// 	PRINT();
// 	return 0;
// }