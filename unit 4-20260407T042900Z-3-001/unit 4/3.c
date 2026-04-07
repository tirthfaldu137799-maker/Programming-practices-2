// Program to copy one file into another file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open target file in write mode
    target = fopen("target.txt", "w");
    if (target == NULL) {
        printf("Error opening target file!\n");
        fclose(source);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}

