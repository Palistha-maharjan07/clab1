#include<stdio.h>
int main()
{
	FILE *file= fopen("record.txt", "w");
	if(file == NULL)
	{
		printf("Enter opening file:\n");
		return 1;
	}
	char name[40];
	int age;
	printf("Enter your name:");
	gets(name);
	printf("Enter your age:");
	scanf("%d", &age);
	fprintf(file, "Name:%s\nAge: %d\n", name, age);
	fclose(file);
	printf("Successfully entered name and age into record.txt.\n");
	return 0;
}
