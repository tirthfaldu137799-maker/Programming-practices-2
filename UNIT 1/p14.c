//Enter a string and print it in reverse order with using string function and without string function.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp;
    int i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    length = strlen(str);

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    printf("String in reverse order (without function): %s\n", str);

    return 0;
}

