#include<stdio.h>
double factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}
int main()
{
	int n,f;
	printf("Enter a number:");
	scanf("%d", &n);
	f= factorial(n);
	printf("Factorial: %d", f);
}
