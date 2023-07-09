#include <stdio.h>

#define DEBUG_ENABLED 1

int main() {
    int x = 5;
    int y = 10;

#ifdef DEBUG_ENABLED
    fprintf(stderr, "Debugging information:\n");
    fprintf(stderr, "x = %d\n", x);
    fprintf(stderr, "y = %d\n", y);
#endif

    int sum = x + y;

    printf("Sum: %d\n", sum);

    return 0;
}
