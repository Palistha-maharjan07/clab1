#include<stdio.h>
int main()
{
	int a=100, *x, **y;
	x= &a;
	y= &x;
	printf("%u is the address of 'x',", &x);
	printf("\n %u is the value of 'a' stored in 'x'.", *x);
	printf("\n %u is the value of 'a' stored in 'y'.", **y);
	printf("%u is the address of 'y',", &y);
	return 0;
}
