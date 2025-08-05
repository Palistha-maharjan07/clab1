#include<stdio.h>
int main()
{
	float l, b, a;
	printf("Enter the length:\t");
	scanf("%f", &l);
	printf("Enter the breadth:\t");
	scanf("%f", &b);
	a= l*b;
	printf("\n Area of rectangle is %.2f", a);
	return 0;
}
