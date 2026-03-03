//Enter N elements and print them.
#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d integers:\n", N);

    for (int i=0; i<N; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered the following elements:\n");

    for (int i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
