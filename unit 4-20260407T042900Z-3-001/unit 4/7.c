// Program to add records in file as per structure (empcode, empname, salary)
// Then read the content and find out the employee who earns the highest salary

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empcode;
    char empname[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e, highest;
    int n, i;

    // Step 1: Write employee records into file
    fp = fopen("EMPLOYEE.txt", "w");
    if (fp == NULL) {
        printf("Error opening EMPLOYEE.txt for writing!\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Empcode: ");
        scanf("%d", &e.empcode);
        printf("Empname: ");
        scanf("%s", e.empname);
        printf("Salary: ");
        scanf("%f", &e.salary);

        fwrite(&e, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);

    // Step 2: Read records and find highest salary
    fp = fopen("EMPLOYEE.txt", "r");
    if (fp == NULL) {
        printf("Error opening EMPLOYEE.txt for reading!\n");
        return 1;
    }

    highest.salary = 0;  // initialize
    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        if (e.salary > highest.salary) {
            highest = e;
        }
    }
    fclose(fp);

    // Step 3: Print employee with highest salary
    printf("\nEmployee with highest salary:\n");
    printf("Empcode: %d\n", highest.empcode);
    printf("Empname: %s\n", highest.empname);
    printf("Salary: %.2f\n", highest.salary);

    return 0;
}

