#include<stdio.h>
int main()
{
	int array[6]= {5, 12, 31, 45, 53, 64};
	int i, n;
	for(i=0; i<6; i++)
	{
		printf("The value of array[%d]: %d\n",i, array[i]);
	}
	printf("\n Enter the index you want to access(0-5):");
	scanf("%d", &n);
	printf("\n The value of your chosen index is: %d", array[n]);
	return 0;
}
