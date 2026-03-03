//Enter a string and find out how many spaces and vowels in the string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int i, spaces = 0, vowels = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }

        char lower_char = tolower(str[i]);
        if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' ||
            lower_char == 'o' || lower_char == 'u')
        {
            vowels++;
        }
    }

    printf("Total spaces: %d\n", spaces);
    printf("Total vowels: %d\n", vowels);

    return 0;
}
