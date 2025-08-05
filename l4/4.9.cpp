#include<stdio.h>
int main()
{
	int c, d, arr[100], n, swap;
	printf("Enter the number of elements you want to enter:");
	scanf("%d", &n);
	for(c=0; c<n; c++)
	{
		printf("Enter the value for array[%d]:", c+1);
		scanf("%d", &arr[c]);
	}
	for(c=0; c<n; c++)
	{
		for(d=0; d<n-c; d++)
		{
			if(arr[d>arr[d+1]])
			{
				swap= arr[d];
				arr[d]= arr[d+1];
				arr[d+1]= swap;
			}
		}
	}
	for(c=0; c<n; c++)
	{
		printf("%d\t", arr[c]);
	}
	return 0;
}
