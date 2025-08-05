#include<stdio.h>
struct students
{
	int roll;
	char name[40];
	float marks;
	char remarks[40];
};struct students std[5];
int main()
{
	int i;
	for(i=0; i<5; i++);
	{
		printf("Enter Roll:");
		scanf("%d", &std[i].roll);
		printf("Enter Name:");
		getchar();
		scanf("%[^\n]", std[i].name);
		printf("Enter Marks:");
		scanf("%f", &std[i].marks);
		printf("Enter Remarks:");
		getchar();
		scanf("%[^\n]", std[i].remarks);
	}
	for(i=0; i<5; i++)
	{
		printf("\n\nRoll: %d", std[i].roll);
		printf("\n\nName: %s", std[i].name);
		printf("\n\nMarks: %.2f", std[i].marks);
		printf("\n\nRemarks: %s", std[i].remarks);
	}
	return 0;
}
