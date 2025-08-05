#include<stdio.h>
int mul();
int main()
{
	int x= mul();
	printf("Multiplication: %d", x);
	return 0;
}
int mul()
{
	int a, b, mul=0;
	printf("Ebter two numbers:");
	scanf("%d %d", &a, &b);
	mul= a*b;
	return mul;
}
