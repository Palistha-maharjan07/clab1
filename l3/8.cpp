#include<stdio.h>
#include<conio.h>
int main()
{
	int num, r=0, o;
	printf("Enter a number:");
	scanf("%d", &num);
	o=num;
	for(int i=num; i!=0; i/=10)
	{
		r=r*10+(i%10);
	}
	if(o==r)
	printf("The number is a palindrome.\n");
	else
	printf("The number is not a palindrome.\n");
	getch();
}
