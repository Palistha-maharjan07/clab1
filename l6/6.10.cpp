#include<stdio.h>
void add(int *a, int *b, int *result)
{
	*result= *a + *b;
}
int main()
{
	int x=10, y= 15, sum=0;
	add(&x, &y, &sum);
	printf("Summation:\n(%d+ %d)= %d", x, y, sum);
	return 0;
}
