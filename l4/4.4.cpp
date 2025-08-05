#include<stdio.h>
int main()
{
	int A[2] [2], B[2] [2], C[2] [2], i, j;
	printf("Enter the value of the 1st matrix:\n\n");
	for(i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter value of A[%d] [%d]:", i, j);
			scanf("%d", &A[i] [j]);
		}
	}
	printf("Enter the value of the 2nd matrix:\n\n");
	for(i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("Enter value of B[%d] [%d]:", i, j);
			scanf("%d", &B[i] [j]);
		}
	}
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			C[i][j]= A[i][j] + B[i][j];
		}
	}
	printf("\n\n Result:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t", C[i] [j]);
		}
		printf("\n");
	}
	return 0;
}
