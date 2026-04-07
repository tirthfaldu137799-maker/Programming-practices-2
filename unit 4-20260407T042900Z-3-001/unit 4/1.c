// Program to write content in a file and then read that file and print the content on screen

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100];

    // Writing to the file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);

    // Reading from the file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nContent of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}
