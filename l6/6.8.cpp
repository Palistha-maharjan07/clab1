#include<stdio.h>
int main()
{
	char *ptrArray[]={"hello", "pretty people", "it's", "Array of Pointers"};
	int i;
	int ArraySize = sizeof(ptrArray)/ sizeof(ptrArray[0]);
	for(i=0; i<ArraySize; i++)
	{
		printf("%s\n", ptrArray[i]);
	}
	return 0;
}
