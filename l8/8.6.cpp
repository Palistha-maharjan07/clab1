#include<stdio.h>
int main()
 {
    FILE *fp;
    int id;
    char name[50], post[50];
    float salary;

    // Open file for writing
    fp = fopen("employee.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Example: Writing data for 3 employees
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &id);
        printf("Name: ");
        scanf(" %[^\n]", name);  // reads string with spaces
        printf("Post: ");
        scanf(" %[^\n]", post);
        printf("Salary: ");
        scanf("%f", &salary);

        // Write to file
        fprintf(fp, "ID: %d, Name: %s, Post: %s, Salary: %.2f\n", id, name, post, salary);
    }

    fclose(fp);
    printf("Data written to employee.txt successfully.\n");
    return 0;
}
