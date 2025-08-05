#include<stdio.h>
void sum(int, int);
int main()
{
	int x, y;
	printf("Enter two numbers:");
	scanf("%d %d", &x, &y);
	sum(x, y);
}
void sum(int a, int b)
{
	int sum= a + b;
	printf("Summation: %d", sum);
}
