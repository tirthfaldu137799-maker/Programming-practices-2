// Program to read a file and count number of characters, blank spaces, tabs and lines in the file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("Total characters: %d\n", characters);
    printf("Blank spaces: %d\n", spaces);
    printf("Tabs: %d\n", tabs);
    printf("Lines: %d\n", lines);

    return 0;
}

