#include<stdio.h>
#include<conio.h>
void changeData(int*, int*);
int main()
{
	int a, b;
	printf("Enter the value for a:");
	scanf("%d", &a);
	printf("Enter the value for b:");
	scanf("%d", &b);
	changeData(&a, &b);
	printf("\n \n In main function:");
	printf("\n After swap, value of a:%d", a);
	printf("\n After swap, value of b:%d", b);
}
void changeData(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
	printf("\n In user defined function:");
	printf("\n After swap, value of a: %d", *x);
	printf("\n After swap, value of b: %d", *y);
	getch ();	
}


