#include<stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
struct student
{
	char name[50];
	struct Date dob;
}; struct student std;
int main()
{
	printf("Enter Name:");
	gets(std.name);
	printf("Enter Date of Birth (YYYY MM DD):");
	scanf("%d %d %d", &std.dob.day, &std.dob.months, &std.dob.year);
	printf("\n Student Details:\n");
	printf("Name: %s\n", std.name);
	printf("Date of Birth: %02d/%02d%04d\n",std.dob.day, std.dob.months, std.dob.year);
	return 0;
}

