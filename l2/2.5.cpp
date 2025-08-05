#include<stdio.h>
int main()
{
	int a, b, s, i;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	printf("Sum of even numbers between %d and %d is:", a,b);
	for(i=a+1; i<b; i++)
	{
		if(i%2==0)
		s=s+i;
	}
	printf("%d", s);
	return 0;
}
