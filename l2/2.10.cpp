#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if(num%5==0)
	{
		printf("\n The number '%d' is multiple of 5.", num);
	}
	else
	{
		printf("\n The number '%d' is not multiple of 5.", num);
	}
	if(num%7==0 && num%11==0)
	{
		printf("\n The number '%d' is divisible by 7 and 11.", num);
	}
	else if(num%7==0 && num%11!=0)
	{
		printf("\n The number 'd' is divisible by 7 but not by 11.", num);
	}
	else if(num%7!=0 && num%11==0)
	{
	 	printf("\n The number 'd' is not divisible by 7 but by 11.", num);
	}
	else
	{
		printf("\n The number '%d' is not divisible by 7 and 11.", num);
	}
	return 0;
}
