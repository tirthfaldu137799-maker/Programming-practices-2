//Check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int l = 0;
    int h;
    int is_palindrome = 1;

    printf("Enter a string to check for palindrome: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    h = strlen(str) - 1;

    while (h > l)
    {
        if (tolower(str[l++]) != tolower(str[h--]))
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else
    {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

