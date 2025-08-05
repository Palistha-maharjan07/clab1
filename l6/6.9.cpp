#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp= *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x=10, y= 15;
	printf("Before swap: \nx: %d\n y: %d\n", x, y);
	swap(&x, &y);
	printf("\n After swap: \nx: %d\n y:%d", x, y);
	return 0;
}
