/*
Three things preprocessor does:
1. Removes all comments.
2. includes all the files from various libraries that program needs to be compiled.
3. expansion of macro definitions.

------------------------------------------------------------------------------------------------------------------------------------------------------->

Purpose: 
	Conditional compilation allows parts of the code to be included or excluded during the compilation process based on certain conditions. 
	It is controlled by preprocessor directives that are evaluated before the compilation.

Preprocessor Directives: 
	Preprocessor directives start with a # symbol and are evaluated by the preprocessor before the actual compilation. 
	They control the flow of code based on specified conditions.

Conditional Directives: 
	Conditional directives include #if, #ifdef, #ifndef, #elif, #else, and #endif. 
	They allow code blocks to be selectively compiled based on specified conditions.

Conditional Compilation Symbols: 
	Conditional directives can use predefined or user-defined symbols to evaluate conditions. 
	Predefined symbols, such as __cplusplus and __GNUC__, are set by the compiler. 
	User-defined symbols can be defined using the #define directive.

------------------------------------------------------------------------------------------------------------------------------------------------------->

#ifdef and #endif:
	#ifdef checks whether a symbol is defined using #define. 
	If the symbol is defined, the code between #ifdef and the corresponding #endif will be included during compilation. 
	Otherwise, it will be excluded.

#ifndef and #endif:
	#ifndef checks whether a symbol is not defined. 
	If the symbol is not defined, the code between #ifndef and the corresponding #endif will be included during compilation. 
	Otherwise, it will be excluded.

#else:
	#else is used in conjunction with #ifdef or #ifndef. 
	The code between #ifdef (or #ifndef) and #else is included if the condition is true. 
	The code between #else and #endif is included if the condition is false.

#elif:
	#elif (short for "else if") is used to check additional conditions when using multiple #ifdef, #ifndef, or #if directives. 
	It allows for multiple conditions to be evaluated in a chain.

#if:
	#if allows for conditional compilation based on constant expressions. 
	It evaluates an expression and includes the code between #if and the corresponding #endif if the expression is non-zero. 
	The expression can use arithmetic, logical, and relational operators.

------------------------------------------------------------------------------------------------------------------------------------------------------->

Include guards are a technique used in C and C++ to prevent multiple inclusions of the same header file. 
They ensure that a header file is included only once in a translation unit, even if it is included multiple times from different sources.

------------------------------------------------------------------------------------------------------------------------------------------------------->

The #pragma directive in C and C++ is a compiler-specific directive that provides additional instructions or control over compilation behavior. 
It is used to convey instructions to the compiler, but its specific effects may vary across different compilers.
The #pragma directive is typically followed by a specific keyword or identifier that represents a compiler-specific command or option.

------------------------------------------------------------------------------------------------------------------------------------------------------->

The #error directive in C and C++ is a preprocessor directive that allows you to generate a compilation error with a custom error message. 
It is typically used to enforce certain conditions or constraints during compilation.
When encountered during the preprocessing phase, the #error directive causes the compilation to stop and displays the specified error message.
Syntax:
#error error_message

------------------------------------------------------------------------------------------------------------------------------------------------------->
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    

    return 0;
}