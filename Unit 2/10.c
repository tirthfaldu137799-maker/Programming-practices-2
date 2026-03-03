Write a program to demonstrate nested structure.

#include <stdio.h>

// Define a structure for address
struct Address {
    char city[50];
    char street[50];
};

// Define a structure for a person
struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    // Declare and initialize a person
    struct Person person1 = {"Alice", 25, {"New York", "123 Main St"}};

    // Print information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s, %s\n", person1.address.street, person1.address.city);

    return 0;
}

