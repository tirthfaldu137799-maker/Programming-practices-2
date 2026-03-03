//Copy the elements of one array into another.
#include <stdio.h>
#include <string.h>

int main()
{
    char source[]="Hello, World!";
    char destination[20];

    strcpy(destination, source);

    printf("Source array: %s\n", source);
    printf("Destination array: %s\n", destination);

    return 0;
}
