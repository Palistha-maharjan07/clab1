#include<stdio.h>
void sum();
int main()
{
	sum();
}
void sum()
{
	int a, b, sum=0;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	sum= a + b;
	printf("Summation: %d", sum);
}
