#include<stdio.h>
int main()
{
	int stock[5], price[5] , i, total[5], sum=0;
	for(i=0; i<5; i++)
	{
		printf("Enter the stock of bulb[%d]:", i+1);
		scanf("%d", &stock[i]);
		printf("Enter the price of bulb[%d]:", i+1);
		scanf("%d", &price[i]);
		total[i]= stock[i]*price[i];
		printf("The total price of bulb[%d]: %d", i+1, total[i]);
		printf("\n\n");
	 } 
	 for(i=0; i<5; i++)
	 {
	 	sum+= total[i];
	 }
	 printf("Total of all bulbs: %d", sum);
	 return 0;
}
