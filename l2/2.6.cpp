#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Swap using third variable:\n");
	a=5;
	b=7;
	printf("\n Before swap:\na: %d\nb: %d\n", a,b);
	c=a;
	a=b;
	b=c;
	printf("\n After swap:\na: %d\nb: %d\n", a,b);
	int d,e;
	printf("\n\n Swap without using third variable:\n");
	d=6;
	e=4;
	printf("\n Before swap:\nd: %d\ne: %d\n", d,e);
	d= d+e;
	e= d-e;
	d= d=e;
	printf("\n After swap:\nd: %d\ne: %d\n", d,e);
	return 0;
}
