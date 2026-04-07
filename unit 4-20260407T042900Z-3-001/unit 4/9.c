// Program to read a file and find out number of upper case letters, lower case letters,
// special symbols, digits and vowels in the file

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digits = 0, special = 0, vowels = 0;

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isupper(ch)) {
            upper++;
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
        }
        else if (islower(ch)) {
            lower++;
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (ch != '\n' && ch != '\t' && ch != ' ') {
            // count only non-space/tab/newline as special symbols
            special++;
        }
    }

    fclose(fp);

    printf("Upper case letters: %d\n", upper);
    printf("Lower case letters: %d\n", lower);
    printf("Digits: %d\n", digits);
    printf("Special symbols: %d\n", special);
    printf("Vowels: %d\n", vowels);

    return 0;
}
