#include<stdio.h>
#include<conio.h>
void sum(int, int);
int main()
{
	int x, y;
	printf("Enter two numbers:");
	scanf("%d %d", &x, &y);
	sum(x, y);
}
void sum(int a, int b)
{
	int total=0;
	total= a + b;
	printf("The sum of two numbers: %d", total);
	getch ();
}
