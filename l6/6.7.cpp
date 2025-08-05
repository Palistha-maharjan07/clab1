#include<stdio.h>
int main()
{
	int a= 12, b= 13, c= 14, i;
	int *ptrArray[3];
	ptrArray[0]= &a;
	ptrArray[1]= &b;
	ptrArray[2]= &c;
	for(i=0; i<3; i++)
	{
		printf("The value of integers in ptrArray[%d]: %u", i, *ptrArray[i]);
		printf("\n The address of integers in ptrArray[%d]: %u\n\n", i, ptrArray[i]);
	}
	return 0;
}
