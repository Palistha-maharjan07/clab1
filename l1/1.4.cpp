#include<stdio.h>
int main()
{
	int f,c;
	printf("Enter the temperature:\t");
	scanf("%d", &f);
    c=(f-32)*100/180;
	printf("temperature in celcius is:%d", c);
	return 0;	
}
