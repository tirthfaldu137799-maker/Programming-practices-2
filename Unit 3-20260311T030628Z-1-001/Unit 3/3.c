/*
Find out maximum and minimum number using pointer to function.
*/

#include <stdio.h>

// Function to find maximum using pointer
int max(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

// Function to find minimum using pointer
int min(int *a, int *b) {
    return (*a < *b) ? *a : *b;
}

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("Maximum = %d\n", max(&x, &y));
    printf("Minimum = %d\n", min(&x, &y));

    return 0;
}

