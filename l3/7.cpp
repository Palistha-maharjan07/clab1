#include<stdio.h>
#include<conio.h>
int main()
{
	int num, r=0;
	printf("Enter a number:");
	scanf("%d", &num);
	for(int i=num; i!=0; i/=10)
    {
			r=r*10+(i%10);
	}
	printf("Reversed number=%d\n", r);
	getch();
}
