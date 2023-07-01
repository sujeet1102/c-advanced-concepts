/*
Use Macros When:

    Performance is critical: 
    	Macros are expanded inline, avoiding the overhead of function calls. 
    	This can lead to performance improvements, especially for small, frequently used code snippets.

	Compile-time computation: 
		Macros allow you to perform computations at compile-time, enabling the generation of code specific to different inputs. 
		This can be useful for template metaprogramming or generating optimized code for different scenarios.

	Code generation: 
		Macros can be used to generate repetitive or boilerplate code, reducing manual code duplication and enhancing maintainability.

	Direct access to symbols: 
		Macros can access and manipulate symbols directly, even if they are not visible in the current scope. 
		This allows macros to perform tasks that functions cannot, such as creating new variable names or generating custom code based on symbol names.

Use Functions When: inline functions are alternative to macros.

    Abstraction and encapsulation: 
    	Functions provide a higher level of abstraction and encapsulation, making code more modular, readable, and reusable. 
    	Functions can have parameters and return values, allowing for flexible input and output.

    Type safety: 
    	Functions have strong type checking, ensuring that arguments and return values match the specified types. 
    	This helps catch type-related errors at compile-time.

    Debugging and profiling: 
    	Functions have a clear structure and can be easily stepped through during debugging. They also provide better support for profiling and code analysis tools.

    Code organization: 
    	Functions allow you to group related code and promote better code organization, making it easier to understand and maintain.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) \
    ((a) > (b) ? (a) : (b))

#define SQUARE(x) \
    ((x) * (x))

#define DEBUG_ENABLED

#ifdef DEBUG_ENABLED
    #define DEBUG_LOG(message) \
        printf("[DEBUG] %s\n", message)
#else
    #define DEBUG_LOG(message)
#endif

int main() {
    int x = 5, y = 7;
    int max = MAX(x, y);
    int square = SQUARE(x);

    DEBUG_LOG("Debug message: Calculation in progress...");

    printf("Maximum of %d and %d is: %d\n", x, y, max);
    printf("Square of %d is: %d\n", x, square);

    return 0;
}
