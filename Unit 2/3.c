Sort above data by name.


#include <stdio.h>
#include <string.h>

// Define structure for student
struct student {
	int rollno;
	char name[20];
	char department[40];
	int year_of_joining;
	float score;
};

int main() {
	// Declare an array of struct student to store data for 5 students
	struct student students[5];

	// Input data for 5 students
	for (int i = 0; i < 5; i++) {
    	printf("\nEnter details for student %d:\n", i + 1);

    	printf("Enter Roll Number: ");
    	scanf("%d", &students[i].rollno);

    	printf("Enter Name: ");
    	scanf("%s", students[i].name);

    	printf("Enter Department: ");
    	scanf("%s", students[i].department);

    	printf("Enter Year of Joining: ");
    	scanf("%d", &students[i].year_of_joining);

    	printf("Enter Score: ");
    	scanf("%f", &students[i].score);
	}

	// Sort students by name using Bubble Sort
	for (int i = 0; i < 5 - 1; i++) {
    	for (int j = 0; j < 5 - i - 1; j++) {
        	if (strcmp(students[j].name, students[j + 1].name) > 0) {
            	// Swap students if they are out of order
            	struct student temp = students[j];
            	students[j] = students[j + 1];
            	students[j + 1] = temp;
        	}
    	}
	}

	// Displaying sorted data for 5 students
	printf("\nStudent Details (sorted by name)\n");
	for (int i = 0; i < 5; i++) {
    	printf("\nDetails of student %d:\n", i + 1);
    	printf("Roll Number: %d\n", students[i].rollno);
    	printf("Name: %s\n", students[i].name);
    	printf("Department: %s\n", students[i].department);
    	printf("Year of Joining: %d\n", students[i].year_of_joining);
    	printf("Score: %.2f\n", students[i].score);
	}

	return 0;
}
