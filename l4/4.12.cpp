#include<stdio.h>
int main()
{
	char name[20], nam[20];
	printf("String with blank space");
	printf("\n Enter your name:");
	scanf("%[^\n]", &name);
	printf("String without blank space");
	printf("\n Enter your name:");
	scanf("%s", &nam);
	printf("\n String with blank space: %s", name);
	printf("\n String without blank space: %s", nam);
	return 0;
}
