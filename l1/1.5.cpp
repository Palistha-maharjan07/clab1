#include<stdio.h>
int main()
{
	float r, a, c;
	#define PI 3.14
	printf("Enter the radius:\t");
	scanf("%f", &r);
	a= PI*r*r;
	printf("Area of circle is: %.2f", a);
	c= 2*PI*r;
	printf("\n Circumference of circle is: %.2f", c);
	return 0;
}
