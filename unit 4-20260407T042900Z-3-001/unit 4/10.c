// Program to read a file and replace all 'a' with 'x'

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open original file for reading
    fp1 = fopen("example.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening example.txt!\n");
        return 1;
    }

    // Open new file for writing modified content
    fp2 = fopen("modified.txt", "w");
    if (fp2 == NULL) {
        printf("Error opening modified.txt!\n");
        fclose(fp1);
        return 1;
    }

    // Read each character and replace 'a' with 'x'
    while ((ch = fgetc(fp1)) != EOF) {
        if (ch == 'a') {
            fputc('x', fp2);
        } else {
            fputc(ch, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    printf("All 'a' replaced with 'x' and saved in modified.txt successfully.\n");

    return 0;
}
