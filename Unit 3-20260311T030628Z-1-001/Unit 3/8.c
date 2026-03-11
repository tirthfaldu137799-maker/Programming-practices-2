/*
Subtract two matrices using pointer to pointer.
*/

#include <stdio.h>
#include <stdlib.h>  // for malloc and free

int main() {
    int rows, cols, i, j;
    int **mat1, **mat2, **diff;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate memory for matrices using pointer to pointer
    mat1 = (int **)malloc(rows * sizeof(int *));
    mat2 = (int **)malloc(rows * sizeof(int *));
    diff = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        mat1[i] = (int *)malloc(cols * sizeof(int));
        mat2[i] = (int *)malloc(cols * sizeof(int));
        diff[i] = (int *)malloc(cols * sizeof(int));
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

    // Subtract matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    // Print result
    printf("Resultant matrix after subtraction:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(mat1[i]);
        free(mat2[i]);
        free(diff[i]);
    }
    free(mat1);
    free(mat2);
    free(diff);

    return 0;
}
