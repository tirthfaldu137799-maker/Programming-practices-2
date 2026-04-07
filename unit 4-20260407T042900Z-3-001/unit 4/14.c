// Program to copy one file into another using command line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *source, *target;
    char ch;

    // Check if correct number of arguments is provided
    if (argc != 3) {
        printf("Usage: %s <source_file> <target_file>\n", argv[0]);
        return 1;
    }

    // Open source file in read mode
    source = fopen(argv[1], "r");
    if (source == NULL) {
        printf("Error opening source file: %s\n", argv[1]);
        return 1;
    }

    // Open target file in write mode
    target = fopen(argv[2], "w");
    if (target == NULL) {
        printf("Error opening target file: %s\n", argv[2]);
        fclose(source);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully from %s to %s.\n", argv[1], argv[2]);

    fclose(source);
    fclose(target);

    return 0;
}
