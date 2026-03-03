Write a program to input data and display data.

#include <stdio.h>

// Define structure for student
struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    // Declare a variable of type struct student
    struct student s;

    // Input data
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf("%s", s.name); // No need for %[^\n]s, as scanf() with %s reads until whitespace.

    printf("Enter Department: ");
    scanf("%s", s.department); // Similarly, reads until whitespace.

    printf("Enter Year of Joining: ");
    scanf("%d", &s.year_of_joining);

    printf("Enter Score: ");
    scanf("%f", &s.score);

    // Displaying data
    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Department: %s\n", s.department);
    printf("Year of Joining: %d\n", s.year_of_joining);
    printf("Score: %.2f\n", s.score);

    return 0;
}

