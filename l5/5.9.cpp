#include<stdio.h>
void swap(int, int);
int main()
{
	int a, b;
	printf("Enter value of a:");
	scanf("%d", &a);
	printf("Enter value of b:");
	scanf("%d", &b);
	swap(a, b);
	printf("\n\n In main function:");
	printf("\n After swap, value of a: %d", a);
	printf("\n After swap, value of b: %d", b);
 } 
 void swap(int x, int y)
 {
 	int t=x;
 	x=y;
 	y=t;
 	printf("\n\n In user defined function:");
	printf("\n After swap, value of a: %d", x);
	printf("\n After swap, value of b: %d", y);
 }
