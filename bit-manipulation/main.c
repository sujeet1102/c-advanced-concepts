#include <stdio.h>
#include <stdlib.h>
/*
Bitwise Operators
| = Bitwise OR
& = Bitwise AND
~ = Bitwise Negation
^ = Bitwise XOR
Commonly used in bitmasks.
Multiple data can be stored in single integer, where each bit represents a piece of info.
*/

/*
Bitwise Shifting
<<  Bitwsie left shift operator
	- Shifts the left operand bit left by right operand no. of times.
>>  Bitwise right shift operator
	- Shifts the left operand bit right by right operand no. of times.
0's get added to the other now empty spaces.
*/

/*
Bitmasks
used for setting and resetting of bits.
	example for 8 bit
	setting a bit at nth position: register = register | (1 << n) : basically we shift 1 to our desired position then bitwise OR the numbers, anything ORed with zero remains the same, but anything ORed with 1 becomes 1, hence all rest bits maintain their original values.
	resetting a bit at nth position: register = register & ~(1 << n) : basically we shift 1 to our desired position then bitwise AND the numbers, then we negate the entire sequence, anything ANDed with 1 remains the same, but anything ANDed with 0 becomes 0, hence resetting the bit.
XOR can be used to toggle.
used to read a bit
	if (flag & MASK) == MASK; then bit is high
*/

/*
Bitfields
We can pack information into bits of a byte, usually flags and TRUE/FALSE values are stored.
Registers in embedded can essentially be represented as bit fields, where we imagine a register to be a number.
they are created using structures but has a special syntax, can also be named alternatively using typedefs.
*/
// Lets imagine a 8 bit register |R6|R5|R4|R3|X|X|R2|R1| Rn is a bit and X is not used (so padding needs to be added). lets write a bitfield for it.
//NOTE: sequencing is very important.
struct my_register{
	unsigned int R1 : 1;
	unsigned int R2 : 1;
	unsigned int  : 1;	//left empty for padding
	unsigned int  : 1;
	unsigned int R3 : 1;
	unsigned int R4 : 1;
	unsigned int R5 : 1;
	unsigned int R6 : 1;
};

int main(void) {
    
    char x1 = 0b00000001;
    char x2 = 0b00000010;

    // printf("%d\n",x1|x2); 
    // printf("%d\n",x1&x2);
    // printf("%d\n",x1^x2);
    // printf("%d\n",~x1);		//Negation of 0b00000001 will be 0b11111110 which will be considered in two's compliment form because rightmost bit is set.

    // printf("%d\n",-x1);		//notice difference

    // printf("%d\n",x1<<1); //Output will be 0b00000010 - which is 2
    // printf("%d\n",x2>>1); //Output will be 0b00000001 - which is 1

    struct my_register reg;
    reg.R1 = 1;
    reg.R2 = 1;
    reg.R4 = 0;
    
    // Print the values in the bitfield
    printf("R1: %u\n", reg.R1);
    printf("R2: %u\n", reg.R2);
    printf("R4: %u\n", reg.R4);

    return 0;
}