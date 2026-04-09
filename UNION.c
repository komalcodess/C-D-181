#include <stdio.h>
#include <string.h>

union Employee {
    int id;
    float salary;
    char name[20];
};

int main() {
    union Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Stored ID: %d\n", e.id);

    printf("\nEnter Salary: ");
    scanf("%f", &e.salary);
    printf("Stored Salary: %.2f\n", e.salary);

    printf("\nEnter Name: ");
    scanf(" %s", e.name);
    printf("Stored Name: %s\n", e.name);

    printf("\nDemonstrating Union Behavior\n");
    printf("Accessing ID after storing Name: %d\n", e.id);
    printf("Accessing Salary after storing Name: %.2f\n", e.salary);
    printf("Accessing Name: %s\n", e.name);


}