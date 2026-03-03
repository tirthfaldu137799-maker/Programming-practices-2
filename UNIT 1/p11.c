//Write a program to multiply two matrices.
#include <stdio.h>

#define N 3

int main()
{
    int A[N][N]={{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int B[N][N]={{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int C[N][N];
    int i, j, k, sum;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            sum = 0;
            for (k = 0; k < N; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
