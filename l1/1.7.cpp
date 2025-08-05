#include<stdio.h>
int main()
{
	float p, t, r, SI;
	printf("Enter the principle amount:\t");
	scanf("%f", &p);
	printf("Enter the time:\t");
	scanf("%f", &t);
	printf("Enter the rate:\t");
	scanf("%f", &r);
	SI= (p*t*r)/100;
	printf("Simple interest is: %.2f", SI);
	return 0;
}
