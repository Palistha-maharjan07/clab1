#include<stdio.h>
int main()
{
	int t1=0, t2=1, nextterm, n;
	printf("Enter any number: ");
	scanf("%d", &n);
	printf("%d\t", t1);
	while(t2<=n)
	{
		printf("%d\t", t2);
		nextterm=t1 + t2;
		t1= t2;
		t2= nextterm;
	}
	return 0;
}
