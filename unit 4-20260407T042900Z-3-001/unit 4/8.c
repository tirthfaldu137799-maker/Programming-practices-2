// Program to add records in a binary file as per structure (empcode, empname, salary)
// Then read the content and print on screen

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empcode;
    char empname[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int n, i;

    // Step 1: Write employee records into binary file
    fp = fopen("EMPLOYEE.dat", "wb");
    if (fp == NULL) {
        printf("Error opening EMPLOYEE.dat for writing!\n");
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

    // Step 2: Read records from binary file and print
    fp = fopen("EMPLOYEE.dat", "rb");
    if (fp == NULL) {
        printf("Error opening EMPLOYEE.dat for reading!\n");
        return 1;
    }

    printf("\nEmployee Records:\n");
    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        printf("Empcode: %d, Empname: %s, Salary: %.2f\n", e.empcode, e.empname, e.salary);
    }
    fclose(fp);

    return 0;
}
