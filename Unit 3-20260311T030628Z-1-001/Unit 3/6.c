/*
Enter N elements and find out sum of odd and even numbers using dynamic array.
*/

#include <stdio.h>
#include <stdlib.h>  // for malloc and free

int main() {
    int n, i, *arr;
    int sumOdd = 0, sumEven = 0;

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
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }

    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d\n", sumOdd);

    // Free allocated memory
    free(arr);

    return 0;
}
