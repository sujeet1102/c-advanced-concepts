
#include <stdio.h>
#include <stdlib.h>

/*
sprintf
int sprintf(char* string, const char *format,...)
sprintf(string, %d%f%c, value,flt,c);
basically stores content in string/character array instead of output on terminal.

fprintf
int fprintf(FILE *stream, const char *format,...)
fprintf(outFile, %d, value);
does basically the same thing as sprintf but writes it in a file.

fflush
int fflush(buffer) / int fflush(FILE *fp)
it is used to clean/flush out the buffer/file.
*/

int main(void) {
    
    char buffer[100]; // Buffer to store the formatted string
    
    int age = 25;
    float height = 1.75;
    char buff[255];
    
    // Format the string using sprintf
    sprintf(buffer, "My age is %d and my height is %.2f meters.\n", age, height);

    // Print the formatted string
    printf("%s\n", buffer);

    fflush(buffer);

    FILE *file1 = fopen("example5.txt", "w");
    if (file1 == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    fprintf(file1, "My age is %d and my height is %.2f meters. ;)\n", age, height);

    fclose(file1);

    fprintf(stderr, "Simulating error");
    
    
    return 0;
}