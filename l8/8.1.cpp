#include<stdio.h>
int main()
{
	FILE *file;
	file= fopen("bca.txt", "w");
	if(file== NULL)
	{
		printf("Error opening file.");
		return 0;
	}
	fprintf(file, "I study BCA.\n");
	fclose(file);
	printf("Text successfully written to bca.txt.\n");
	return 0;
}
