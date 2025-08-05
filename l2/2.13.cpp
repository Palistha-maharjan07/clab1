#include<stdio.h>
int main()
{
	char name[20], address[20], age[5], weight[5], height[5];
	printf("Enter name:");
	gets(name);
	printf("Enter address:");
	gets(address);
	printf("Enter age:");
	gets(age);
	printf("Enter weight:");
	gets(weight);
	printf("Enter height:");
	gets(height);
	printf("\n Entered values\n");
	puts(name);
	puts(address);
	puts(age);
	puts(weight);
	puts(height);
	return 0;
}
