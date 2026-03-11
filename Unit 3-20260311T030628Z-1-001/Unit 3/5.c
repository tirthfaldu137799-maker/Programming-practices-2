/*
Enter N elements and find out sum of prime numbers using dynamic array.
*/

#include <stdio.h>
#include <stdlib.h>  // for malloc and free

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, i, *arr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}

