// Program to enter a number in one file and print its reverse in another file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    int num, rev = 0, digit;

    // Step 1: Write number into NUM.txt
    fp1 = fopen("NUM.txt", "w");
    if (fp1 == NULL) {
        printf("Error opening NUM.txt for writing!\n");
        return 1;
    }

    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(fp1, "%d", num);
    fclose(fp1);

    // Step 2: Read number back from NUM.txt
    fp1 = fopen("NUM.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening NUM.txt for reading!\n");
        return 1;
    }
    fscanf(fp1, "%d", &num);
    fclose(fp1);

    // Step 3: Reverse the number
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    // Step 4: Write reversed number into REVERSE.txt
    fp2 = fopen("REVERSE.txt", "w");
    if (fp2 == NULL) {
        printf("Error opening REVERSE.txt for writing!\n");
        return 1;
    }
    fprintf(fp2, "%d", rev);
    fclose(fp2);

    printf("Number written to NUM.txt and its reverse stored in REVERSE.txt successfully.\n");

    return 0;
}
