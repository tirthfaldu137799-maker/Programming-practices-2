/*
Enter 2 strings and concate them.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy first string into result
    strcpy(result, str1);

    // Concatenate second string to result
    strcat(result, str2);

    printf("Concatenated string = %s\n", result);

    return 0;
}

