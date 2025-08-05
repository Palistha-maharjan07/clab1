#include<stdio.h>
int main()
{
	float r, tsa, h;
	#define PI 3.14
	printf("Enter the radius:\t");
	scanf("%f", &r);
	printf("Enter the height:\t");
	scanf("%f", &h);
	tsa= 2*PI*r*(r+h);
	printf("Total surface area of cylinder is: %.2f", tsa);
	return 0;
}
