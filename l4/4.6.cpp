#include<stdio.h>
int main()
{
	int a[10] [10], b [10] [10], mul [10] [10], r1, r2, c1, c2, i, j, k;
	printf("Enter the no. of rows for 1st matrix:");
	scanf("%d", &r1);
	printf("Enter the no. of columns for 1st matrix:");
	scanf("%d", &c1);
	printf("Enter the no. of rows for 2nd matrix:");
	scanf("%d", &r2);
	printf("Enter the no. of columns for 2nd matrix:");
	scanf("%d", &c2);
	if(c1==r2)
	{
		printf("\n\n Enter the value for 1st matrixs:\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				printf("Enter value for A[%d] [%d]:", i, j);
				scanf("%d", &a[i] [j]);
			}
		}
		printf("\n\n Enter the value for 2nd matrixs:\n");
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c2; j++)
			{
				printf("Enter value for B[%d] [%d]:", i, j);
				scanf("%d", &b[i] [j]);
			}
		}
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				mul[i] [j]=0;
				for(k=0; k<c1; k++)
				{
					mul[i] [j]+= a[i] [k] * b[k] [j];
				}
			}
		}
		printf("\n\n Output:\n\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				printf("%d\t", mul [i] [j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n Error: Multiplication is not possible for the given matrices.");
	}
    return 0;
}
