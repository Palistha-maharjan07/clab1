#include<stdio.h>
#include<conio.h>
int main()
{
	 float PI= 3.14159;
	float radius, area;
	printf("Enter the radius of a circle:");
	scanf("%f", &radius);
	area= PI* radius* radius;
	printf("Area of the circle= %.2f\n", area);
	getch();
}
