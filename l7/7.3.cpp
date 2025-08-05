#include<stdio.h>
struct student
{
	int roll;
	char name[40];
	float marks;
	char remarks[40];
}; struct students std[5];
int main()
{
	for (i=0; i<5; i++)
	{
		printf("Enter Roll:");
		scanf("%d", &std[i].roll);
		printf("Enter Name:");
		getchar();
		scanf("%[^\n]", std[i].name);
		printf("Enter Marks:");
		scanf("%f", &std[i]. marks);
		printf("Enter Remarks:");
		getchar();
		scanf("%[^\n]", std[i].remarks);
	}
	for(i=0; i<5, i++)
	{
		priintf("\n Roll:%d", std[i].roll);
	    priintf("\n Name:%s", std[i].name);
		priintf("\n Marks:%.2f", std[i].marks);
		priintf("\n Remarks:%s", std[i].remarks);	
	}
	return 0;
}
