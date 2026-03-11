/*
Enter N elements and find out sum and average of them using dynamic array.
*/

#include <stdio.h>
#include <stdlib.h>  // for malloc and free

int main() {
    int n, i;
    float sum = 0, avg;
    int *arr;

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
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    // Free allocated memory
    free(arr);

    return 0;
}

