/*
Add two matrices using array of pointers.
*/

#include <stdio.h>
#include <stdlib.h>  // for malloc and free

int main() {
    int rows, cols, i, j;
    int **mat1, **mat2, **sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate memory for matrices
    mat1 = (int **)malloc(rows * sizeof(int *));
    mat2 = (int **)malloc(rows * sizeof(int *));
    sum  = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        mat1[i] = (int *)malloc(cols * sizeof(int));
        mat2[i] = (int *)malloc(cols * sizeof(int));
        sum[i]  = (int *)malloc(cols * sizeof(int));
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print result
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(mat1[i]);
        free(mat2[i]);
        free(sum[i]);
    }
    free(mat1);
    free(mat2);
    free(sum);

    return 0;
}

