#include<stdio.h>
int main()
{
	float arr[10];
	int i;
	for(i=0; i<10; i++)
	{
		printf("Enter float value for array[%d]:", i+1);
		scanf("%f",&arr[i]);
	}
	printf("\n\n Entered value:\n\n");
	for(i=0; i<10; i++)
	{
		printf("Value of array[%d]: %.2f\n", i+1, arr[i]);
	}
	return 0;
}
