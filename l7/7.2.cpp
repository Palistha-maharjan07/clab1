#include<stdio.h>
struct employee
{
	int id;
	char name[40];
	char department[50];
}; struct employee emp;
int main()
{
	printf("Enter ID:");
	scanf("%d", &emp.id);
	printf("Enter Name:");
	getchar();
	scanf("%[^\n]", emp.name);
	printf("Enter Department:");
	getchar();
	scanf("%[^\n]", emp.department);
	printf("\nID: %d\nName: %s\nDepartment: %s", emp.id, emp.name, emp.department);
	return 0;
}
