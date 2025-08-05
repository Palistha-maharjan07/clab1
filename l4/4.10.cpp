#include<stdio.h>
int main()
{
	int arr[6]= {34, 78, 12, 90, 23, 56};
	int i, n;
	printf("Enter the elements to search:");
	scanf("%d",&n);
	for(i=0; i<6; i++)
	{
		if(arr[i]==n)
		{
			printf("Number found at index %d.\n", i);
		}
	}
	return 0;
}
