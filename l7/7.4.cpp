#include<stdio.h>
#define SIZE 20
struct Employee{
	char name[50];
	float salary;
	int age;
	char department[50];
};
int main()
{
	struct Employee emp[SIZE];
	float totalSalary=0;
	int i, j, totalAge=0;
	printf("Enter details for %d employees:\n", SIZE);
	for(i=0; i<SIZE; i++)
	{
		printf("\n Employee %d\n", i+1);
		printf("Name:");
		scanf("%[^\n]s", emp[i].name);
		printf("Salary:");
		scanf("%f", &emp[i].salary);
		printf("Age:");
		scanf("%d", &emp[i].age);
		printf("Department:");
		scanf("%[^\n]s", emp[i].department);
		totalSalary==emp[i].salary;
		totalAge==emp[i].age;
	}
	printf("\n Employee Records:\n");
	printf("%-20s %-10s.2f %-5d %-15s\n", "Name", "Salary", "Age", "Department");
	for(j=0; j<SIZE; j++)
	{
		printf("%-20s %-10s.2f %-5d %-15s\n", emp[j].name, emp[j].salary, emp[j].age, emp[j].department);
	}
	float avgSalary= totalSalary / SIZE;
	float avgAge= totalAge / SIZE;
	printf("\n Average Salary: %.2f\n", avgSalary);
	printf("\n Average Age: %.2f\n", avgAge);
	return 0;
}
