#include <stdio.h>
#include <string.h>
#define MAX 100

struct Employee {
    char name[50];
    char address[100];
    float salary;
};

void sortByName(struct Employee emp[], int n) {
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

int main() {
    struct Employee emp[MAX];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar();  // Consume newline character

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("Address: ");
        fgets(emp[i].address, sizeof(emp[i].address), stdin);
        emp[i].address[strcspn(emp[i].address, "\n")] = '\0';

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        getchar();  // Consume newline character
    }

    sortByName(emp, n);

    printf("\nEmployee records in ascending order by name:\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nAddress: %s\nSalary: %.2f\n", emp[i].name, emp[i].address, emp[i].salary);
    }

    return 0;
}
