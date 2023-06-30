
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
getline()

ssize_t getline(char **buffer, size_t *size, FILE *stream)

In the first example, getline() is used with stdin to read a line of text from the user. The function takes a pointer to a char buffer (line) and a pointer to a size_t variable (len) to store the size of the buffer.

After reading the line of text, the program prints the entered line on the console.

In the second example, getline() is used with a file (example.txt). The file is opened in read mode using fopen().

Inside the loop, getline() reads lines from the file until the end of the file is reached. Each line is printed on the console along with the number of characters read.

It's important to note that the getline() function dynamically allocates memory for the line buffer. Therefore, it is necessary to free the allocated memory using free() when it is no longer needed.

Additionally, the getline() function returns the number of characters read, excluding the newline character (\n), or -1 if an error occurs.
*/

int main() {
    // Using getline() with stdin
    printf("Using getline() with stdin:\n");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    printf("Enter a line of text: ");
    read = getline(&line, &len, stdin);
    if (read != -1) {
        printf("You entered: %s", line);
    } else {
        printf("Failed to read input.\n");
    }

    free(line);
    printf("\n\n");

    // Using getline() with a file
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Using getline() with a file:\n");
    char *fileLine = NULL;
    size_t fileLen = 0;

    while ((read = getline(&fileLine, &fileLen, file)) != -1) {
        printf("Read %zu characters: %s", read, fileLine);
    }

    free(fileLine);
    fclose(file);

    char string[40];

    strcpy(string, "hello! good day.");
    puts(string);

    return 0;
}