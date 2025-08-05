#include<stdio.h>
void minimum(int a[100], int);
int main()
{
	int num[100], n, i;
	printf("Enter the no. of elements:");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter no. for num[%d]:", i+1);
		scanf("%d", &num[i]);
	}
	minimum(num,n);
}
void minimum(int a[100], int b)
{
	int i, min;
	min= a[0];
	for(i=0; i<b; i++)
	{
    	if(a[i]<min)
    	{
	    	min=a[i];
    	}
    }
    printf("\n Minimum in array: %d", min);
}
