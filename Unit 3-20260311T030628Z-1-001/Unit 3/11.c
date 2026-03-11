/*
Enter a string and print it in uppercase letters.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for to upper()

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Convert each character to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("String in uppercase = %s\n", str);

    return 0;
}

