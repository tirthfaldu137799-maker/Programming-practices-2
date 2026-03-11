/*
Copy a string into another.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    // Copy string into another
    strcpy(str2, str1);

    printf("Copied string = %s\n", str2);

    return 0;
}
