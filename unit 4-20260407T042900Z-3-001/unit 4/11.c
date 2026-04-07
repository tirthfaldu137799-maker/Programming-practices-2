// Program to find the size of a file without traversing character by character

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    long size;

    // Open file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Move file pointer to the end
    fseek(fp, 0, SEEK_END);

    // Get current position (which is the size of the file in bytes)
    size = ftell(fp);

    fclose(fp);

    printf("Size of the file: %ld bytes\n", size);

    return 0;
}
