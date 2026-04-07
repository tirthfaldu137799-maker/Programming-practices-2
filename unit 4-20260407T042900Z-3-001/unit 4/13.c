// Program to print number of arguments and list of strings given in command line

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    // Print number of arguments
    printf("Number of arguments: %d\n", argc);

    // Print list of arguments
    printf("List of arguments:\n");
    for (i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
