//Enter your name and print it vertically.
#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")]=0;

    printf("Your name printed vertically:\n");
    for (i = 0; i < strlen(name); i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}
