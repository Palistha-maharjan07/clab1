#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j;
	char swap[20], name[50] [50];
	printf("Enter the number of students name: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the name of students[%d]:",i+1);
		scanf("%s", &name[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(strcmp(name[j], name[j+1])>0)
			{
				strcpy(swap, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], swap);
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%s\t", name[i]);
	}
	return 0;
}
