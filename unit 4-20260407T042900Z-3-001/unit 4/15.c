// Program to demonstrate fseek(), ftell() and rewind() functions

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Step 1: Create a file and write some content
    fp = fopen("demo.txt", "w+");  // open for both reading and writing
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("Hello World!", fp);

    // Step 2: Use fseek() to move file pointer
    fseek(fp, 6, SEEK_SET);  // move to 6th byte from beginning
    printf("After fseek, file pointer is at position: %ld\n", ftell(fp));

    // Step 3: Read character at current position
    ch = fgetc(fp);
    printf("Character at position 6: %c\n", ch);

    // Step 4: Use rewind() to move pointer back to beginning
    rewind(fp);
    printf("After rewind, file pointer is at position: %ld\n", ftell(fp));

    // Step 5: Read first character
    ch = fgetc(fp);
    printf("First character in file: %c\n", ch);

    fclose(fp);

    return 0;
}
