#include<stdio.h>
int mul(int, int);
int main()
{
	int a, b, c;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	c=mul(a, b);
	printf("Product: %d", c);
	return 0;
}
int mul(int x, int y)
{
	int m= x*y;
	return m;
}
