// Program to append the content in a given file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100];

    // Open file in append mode
    fp = fopen("example.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);
    fclose(fp);

    printf("Content appended successfully.\n");

    return 0;
}
