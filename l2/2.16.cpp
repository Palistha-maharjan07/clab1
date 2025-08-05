#include<stdio.h>
int main()
{
	int a, b, i, min, HCF, LCM;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	min= a<b?a:b;
	for(i=1; i<=min; i++)
	{
		if(a%i==0 && b%i==0)
		{
			HCF= i;
		}
	}
	LCM=(a*b)/HCF;
	printf("\n HCF of %d & %d: %d", a, b, HCF);
	printf("\n LCM of %d & %d: %d", a, b, LCM);
	return 0;
}
