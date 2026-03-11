/*
Find out area of circle using pointer and function.
*/

#include <stdio.h>
#define PI 3.14159

// Function to calculate area of circle using pointer
void areaOfCircle(float *radius, float *area) {
    *area = PI * (*radius) * (*radius);
}

int main() {
    float r, a;

    printf("Enter radius of circle:\n");
    scanf("%f", &r);

    // Call function with pointers
    areaOfCircle(&r, &a);

    printf("Area of circle = %.2f\n", a);

    return 0;
}

