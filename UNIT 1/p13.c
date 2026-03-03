//Enter a string and find out length of string with using string function and without string function.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int length_without_func = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        length_without_func++;
    }
    printf("Length without string function: %d\n", length_without_func);

    printf("Length with string function (strlen): %lu\n", strlen(str));

    return 0;
}
