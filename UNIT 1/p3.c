//Enter N elements and find maximum and minimum value.
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
    int max_val, min_val;

    printf("Enter %d integers:\n", N);

    printf("Element 1: ");
    scanf("%d", &num);
    max_val=num;
    min_val=num;


    for (int i=1; i<N; i++)
        {
        printf("Element %d: ", i+1);
        scanf("%d", &num);

        if (num>max_val)
        {
            max_val=num;
        }

        if (num<min_val)
        {
            min_val=num;
        }
    }

    printf("\nMaximum value entered: %d\n", max_val);
    printf("Minimum value entered: %d\n", min_val);

    return 0;
}
