#include<stdio.h>
int main()
{
	int a[5]={2, 4, 6, 8, 10}, *x[5], i;
	for(i=0; i<5; i++)
	{
		printf("%d\t", a[i]);
	}
	for(i=0; i<5; i++)
	{
		x[i]= &a[i];
	}
	printf("\n\n Values of array stored in array pointer: \n");
	for(i=0; i<5; i++)
	{
		printf("\n %d", *x[i]);
	}
	return 0;
}
