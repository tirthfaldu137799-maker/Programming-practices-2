/*
Enter a string and print it in lowercase letters.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Convert each character to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("String in lowercase = %s\n", str);

    return 0;
}

