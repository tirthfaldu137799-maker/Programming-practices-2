//Enter N elements and find total and average of them.
#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    if (N<=0)
    {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int num;
    long long total=0;
    float average;

    printf("Enter %d integers:\n", N);

    for (int i=0; i<N; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &num);
        total+=num;
    }

    average=(float)total/N;

    printf("\nTotal sum of elements: %lld\n", total);
    printf("Average of elements: %.2f\n", average);

    return 0;
}
