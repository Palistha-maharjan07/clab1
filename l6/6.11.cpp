#include<stdio.h>
void pointer(int *arr, int size)
{
	int i;
	printf("Elements of array:\n");
	for(i=0; i<size; i++)
	{
		printf("%d\t", arr[i]);
	}
}
int main()
{
	int i, numbers[]= {2, 3, 4, 5, 8};
	int size= sizeof(numbers)/sizeof(numbers[0]);
	pointer(numbers, size);
	return 0;
}
