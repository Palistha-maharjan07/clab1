#include<stdio.h>
int main()
{
	float x, y, cal;
	char Ch1;
	printf("Enter a mathematical operation(+, -, *, /):");
	Ch1= getchar();
	printf("Enter value of x:");
	scanf("%f", &x);
	printf("Enter value of y:");
	scanf("%f", &y);
	switch(Ch1)
	{
		case'+':
		cal= x+y;
		printf("\n Summation:%.2f", cal);
		break;
		case'-':
		cal= x-y;
		printf("\n Subtraction:%.2f", cal);
		break;
		case'*':
		cal= x*y;
		printf("\n Multiplication:%.2f", cal);
		break;
		case'/':
		cal= x/y;
		printf("\n Division:%.2f", cal);
		break;
		default:
		printf("\n Invalid operator.");
	}
	return 0;
}
