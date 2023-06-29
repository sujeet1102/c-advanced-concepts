/*
    The program demonstrates the usage of getc() to read characters from a file (example1.txt), getchar() to read characters from standard input, fgetc() to read characters from another file (example2.txt), and ungetc() to put back a character into the input stream.

    Each section begins with a header indicating which function is being used.

    In the getc() and fgetc() examples, the characters are read from the respective files until the end of the file (EOF) is reached. The characters are then printed on the console.

    In the getchar() example, characters are read from the standard input until the end of the input is encountered (EOF), and they are printed on the console.

    In the ungetc() example, characters are read from the standard input until the character 'a' is encountered. The ungetc() function is then used to put the character back into the input stream, effectively breaking out of the loop without printing the character.
*/

// #include <stdio.h>

// int main() {
//     // Example using getc()
//     FILE *file1 = fopen("example1.txt", "r");
//     if (file1 == NULL) {
//         printf("Failed to open the file.\n");
//         return 1;
//     }

//     printf("Using getc():\n");
//     int ch1;
//     while ((ch1 = getc(file1)) != EOF) {
//         printf("%c", ch1);
//     }

//     fclose(file1);
//     printf("\n\n");

//     // Example using getchar()
//     printf("Using getchar():\n");
//     int ch2;
//     while ((ch2 = getchar()) != EOF) {
//         printf("%c", ch2);
//     }
//     printf("\n\n");

//     // Example using fgetc()
//     FILE *file2 = fopen("example2.txt", "r");
//     if (file2 == NULL) {
//         printf("Failed to open the file.\n");
//         return 1;
//     }

//     printf("Using fgetc():\n");
//     int ch3;
//     while ((ch3 = fgetc(file2)) != EOF) {
//         printf("%c", ch3);
//     }

//     fclose(file2);
//     printf("\n\n");

//     // Example using ungetc()
//     printf("Using ungetc():\n");
//     int ch4;
//     while ((ch4 = getchar()) != EOF) {
//     	printf("%c", ch4);
//         if (ch4 == 'a') {
//             ungetc(ch4, stdin);
//             break;
//         }
        
//     }

//     return 0;
// }

  /*  // The program demonstrates the usage of putc(), putchar(), and fputc() functions to write characters into files.

    // In the putc() example, the characters 'H', 'e', 'l', 'l', 'o' are written to the file example1.txt using putc().

    // In the putchar() example, the characters 'W', 'o', 'r', 'l', 'd' are written to the standard output (console) using putchar().

    // In the fputc() example, the characters '1', '2', '3', '4', '5' are written to the file example2.txt using fputc(). */

    #include <stdio.h>

int main() {
    // Example using putc()
    FILE *file1 = fopen("example3.txt", "w");
    if (file1 == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Using putc():\n");
    putc('H', file1);
    putc('e', file1);
    putc('l', file1);
    putc('l', file1);
    putc('o', file1);

    fclose(file1);
    printf("\n\n");

    // Example using putchar()
    printf("Using putchar():\n");
    putchar('W');
    putchar('o');
    putchar('r');
    putchar('l');
    putchar('d');
    printf("\n\n");

    // Example using fputc()
    FILE *file2 = fopen("example4.txt", "w");
    if (file2 == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Using fputc():\n");
    fputc('1', file2);
    fputc('2', file2);
    fputc('3', file2);
    fputc('4', file2);
    fputc('5', file2);

    fclose(file2);
    printf("\n\n");

    return 0;
}


