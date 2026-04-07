// Program to write a string in "greencity.txt" and print it in reverse order in file "cleancity.txt"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char str[200];
    int len, i;

    // Write string into greencity.txt
    fp1 = fopen("greencity.txt", "w");
    if (fp1 == NULL) {
        printf("Error opening greencity.txt for writing!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp1);
    fclose(fp1);

    // Read string back from greencity.txt
    fp1 = fopen("greencity.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening greencity.txt for reading!\n");
        return 1;
    }
    fgets(str, sizeof(str), fp1);
    fclose(fp1);

    // Open cleancity.txt for writing reversed string
    fp2 = fopen("cleancity.txt", "w");
    if (fp2 == NULL) {
        printf("Error opening cleancity.txt for writing!\n");
        return 1;
    }

    len = strlen(str);
    // Write characters in reverse order
    for (i = len - 1; i >= 0; i--) {
        fputc(str[i], fp2);
    }

    fclose(fp2);

    printf("String written to greencity.txt and reversed into cleancity.txt successfully.\n");

    return 0;
}

