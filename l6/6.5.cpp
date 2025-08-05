#include<stdio.h>
struct student
{
	char name[20];
	int age;
	float marks;
};struct student std;
int main()
{
	printf("Enter Name:");
	scanf("%[^\n]", std.name);
	printf("Enter Age:");
	scanf("%d", &std.age);
	printf("Enter Marks:");
	scanf("%f", &std.marks);
	printf("\n Student Details:\n");
	printf("Name: %s\n", std.name);
	printf("Age: %d\n", std.age);
	printf("Marks, %.2f\n", std.marks);
	return 0;
}
