#include<stdio.h>
int main()
{
	int a, b, c, largest, smallest;
	printf("Enter three numbers:");
	scanf("%d %d %d", &a, &b, &c);
	largest= a;
	smallest= b;
	if(b> largest) largest=b;
	if(c> largest) largest=c;
	if(b< smallest) smallest=b;
	if(c<smallest) smallest=c;
	printf("\n\n '%d' is largest number.", largest);
	if(largest%2==0)
	{
		printf("\n '%d' is even number.", largest);
	}
	else
	{
		printf("\n '%d' is odd number.", largest);
	}
	printf("\n\n '%d' is the smallest number.", smallest);
	if(smallest%2==0)
	{
		printf("\n '%d' is even number.", smallest);
	}
	else
	{
		printf("\n '%d' is odd number.", smallest);
	}
	return 0;
}

