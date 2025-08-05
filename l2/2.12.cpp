#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, root1, root2;
	printf("Enter a, b, c:");
	scanf("%f %f %f", &a, &b, &c);
	if(a==0)
	{
		printf("not a quadratic equation");
	}
	else
	{
		d= b*b-4*a*c;	
	}
	if(d>0)
	{
		root1=(-b + sqrt(d))/(2*a);
		root2=(-b - sqrt(d))/(2*a);
		printf("\n Roots are %.2f and %.2f", root1, root2);
	}
	else
	{
		printf("\n Roots are complex.\n");
	}
	return 0;
}
