#include<stdio.h>
#include<string.h>
int main()
{
	 char str1[20]="PALISTHA";
	 char str2[20]="maharjan";
	 printf("Before value changeof str1: %s", str1);
	printf("\nBefore value changeof str2: %s", str2);
	strlwr(str1);
	strupr(str2);
	printf("\n\nAfter value change of str1: %s", str1);
	printf("\n\nAfter value change of str2: %s", str2);
	return 0;
}

