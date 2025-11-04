// 2.	Write a C program to compute the monthly pay of 100 employees 
// using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. 
// Gross-salary (basic pay + DA). Print the employees name and gross salary. 

#include <stdio.h>

struct Employee {
    char name[50];
    float basic, da, gross;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name); 
        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basic);

        emp[i].da = 0.52 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].da;
    }

    printf("\n--- Employee Gross Salary Report ---\n");
    printf("Name\t\tGross Salary\n");
    printf("-------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-10s\t%.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}
